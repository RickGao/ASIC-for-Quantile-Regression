import numpy as np
import matplotlib.pyplot as plt

def generate_data_with_intercept(n_samples=100, n_features=5, outlier_ratio=0.125, random_seed=None):
    """
    Generate a dataset for quantile regression with an intercept column added and some outliers.

    Parameters:
    n_samples: Number of samples
    n_features: Number of features (excluding intercept)
    outlier_ratio: Proportion of samples to be treated as outliers
    random_seed: Seed for reproducibility (default: None)

    Returns:
    X: Feature matrix with intercept (shape: n_samples x (n_features + 1))
    y: Target variable
    """
    if random_seed is not None:
        np.random.seed(random_seed)

    # Generate feature matrix without intercept
    X = np.random.uniform(-3, 3, (n_samples, n_features))

    # Generate true coefficients for features and intercept
    true_beta = np.array([1] + [2] * n_features)  # Intercept + slopes

    # Add intercept column (a column of ones)
    X_with_intercept = np.c_[np.ones(n_samples), X]

    # Generate noise with variance dependent on feature values
    noise = np.random.normal(0, 0.5 + 0.5 * np.abs(X).mean(axis=1), n_samples)

    # Calculate target variable y
    y = X_with_intercept @ true_beta + noise

    # Introduce outliers
    n_outliers = int(outlier_ratio * n_samples)
    outlier_indices = np.random.choice(n_samples, n_outliers, replace=False)
    y[outlier_indices] += np.random.normal(0, 5, size=n_outliers)  # Add large noise to outliers

    return X_with_intercept, y

def matrix_transpose(matrix):
    """
    Transpose a given matrix.

    Parameters:
    matrix: Input matrix (2D array)

    Returns:
    Transposed matrix
    """
    return np.transpose(matrix)

def plot_data(X, y):
    """
    Plot the data points, highlighting outliers.

    Parameters:
    X: Feature matrix with intercept (n_samples x (n_features + 1))
    y: Target variable
    """
    # Use the first feature for plotting
    x_values = X[:, 1]

    # Highlight outliers
    outlier_threshold = np.percentile(np.abs(y - y.mean()), 87.5)  # Top 12.5% as outliers
    outliers = np.abs(y - y.mean()) > outlier_threshold

    plt.figure(figsize=(10, 6))
    plt.scatter(x_values[~outliers], y[~outliers], color='blue', label='Inliers', alpha=0.6)
    plt.scatter(x_values[outliers], y[outliers], color='red', label='Outliers', alpha=0.6)
    plt.title('Data Points with Outliers Highlighted')
    plt.xlabel('Feature 1')
    plt.ylabel('Target Variable')
    plt.legend()
    plt.grid(alpha=0.3)
    plt.show()

def quantile_regression(X, y, tau=0.5, learning_rate=0.01, max_iterations=1000, epsilon=1e-6):
    """
    Implement Quantile Regression using gradient descent

    Parameters:
    X: feature matrix (n_samples, n_features)
    y: target vector (n_samples,)
    tau: desired quantile (default: 0.5 for median)
    learning_rate: learning rate for gradient descent
    max_iterations: maximum number of iterations
    epsilon: convergence threshold

    Returns:
    beta: fitted parameters [intercept, slope(s)]
    """
    # Add intercept term to X (add a column of ones for the intercept term)
    n_samples, n_features = X.shape

    # Initialize parameters (beta) to zeros
    beta = np.zeros(n_features)

    for iteration in range(max_iterations):
        # Step 1: Calculate residuals
        Xbeta = X @ beta  # Matrix-Vector multiplication (predicted values)
        r = y - Xbeta  # Vector subtraction (actual - predicted)

        # Step 2: Compute indicator function
        # I = 1 if residual < 0, else 0
        # This tells us which observations are above/below our current estimate
        I = (r < 0).astype(float)

        # Step 3: Calculate gradient
        gradient = X.T @ (I - tau) / n_samples

        # Step 4: Update parameters using gradient descent
        beta_new = beta - learning_rate * gradient

        # Step 5: Check convergence
        # If parameters haven't changed much, we've converged
        if np.linalg.norm(beta_new - beta) < epsilon:
            beta = beta_new
            break

        beta = beta_new
    return beta

def draw_points_and_lines(X, y, betas, quantiles):
    """
    Simple drawing function to show data points and fitted lines
    X: input features
    y: target values
    betas: list of fitted parameters for each quantile
    quantiles: list of quantile values
    """
    # Create a simple plot
    plt.figure(figsize=(10, 8))

    # First draw all points
    print("Drawing data points...")
    plt.scatter(X[:, 1], y, color='gray', alpha=0.5, s=30, label='Data points')

    # Extract the first feature for plotting
    x_range = np.linspace(X[:, 1].min(), X[:, 1].max(), 100).reshape(-1, 1)

    # Handle higher-dimensional features by averaging other features
    if X.shape[1] > 2:  # Beyond intercept and first feature
        other_features = X[:, 2:].mean(axis=0)
        other_features = np.tile(other_features, (x_range.shape[0], 1))
        X_plot = np.c_[np.ones(len(x_range)), x_range, other_features]
    else:
        X_plot = np.c_[np.ones(len(x_range)), x_range]

    colors = ['blue', 'green', 'red', 'purple', 'orange']
    for beta, tau, color in zip(betas, quantiles, colors):
        y_line = X_plot @ beta
        plt.plot(x_range, y_line, color=color, linewidth=2,
                 label=f'{int(tau * 100)}th percentile')
        print(f"Fitted line for {int(tau * 100)}th percentile")

    plt.title('Data Points and Quantile Regression Lines')
    plt.xlabel('Feature 1')
    plt.ylabel('y')
    plt.grid(True, alpha=0.3)
    plt.legend()
    plt.show()


def save_data_to_txt(X, y, filename="data.txt"):
    """
    Save the feature matrix X and target vector y to a txt file.

    Parameters:
    X: Feature matrix
    y: Target variable
    filename: Output file name (default: "data.txt")
    """
    with open(filename, "w") as f:
        # Save X
        f.write("# Feature Matrix\n")
        np.savetxt(f, X)
        f.write("\n# Target Variable\n")
        # Save y
        np.savetxt(f, y)

def load_data_from_txt(filename="data.txt"):
    """
    Load the feature matrix X and target vector y from a txt file.

    Parameters:
    filename: Input file name (default: "data.txt")

    Returns:
    X: Feature matrix
    y: Target variable
    """
    with open(filename, "r") as f:
        lines = f.readlines()
        # Find the separator between X and y
        separator_index = lines.index("# Target Variable\n")
        # Parse X
        X = np.loadtxt(lines[:separator_index])
        # Parse y
        y = np.loadtxt(lines[separator_index + 1:])
    return X, y


if __name__ == "__main__":
    # Example usage
    n_samples = 100
    n_features = 7

    print("Generating dataset...")
    X, y = generate_data_with_intercept(n_samples=n_samples, n_features=n_features, outlier_ratio=0.125)

    # save_data_to_txt(X, y, "data_large.txt")
    #
    # X, y = load_data_from_txt("data_large.txt")

    print("\nFitting quantile regression models...")
    quantiles = [0.1, 0.25, 0.5, 0.75, 0.9]
    # quantiles = [0.5]

    betas = []

    for tau in quantiles:
        print(f"Fitting {int(tau * 100)}th percentile...")
        beta = quantile_regression(X, y, tau=tau, max_iterations=3000, learning_rate=0.01)
        betas.append(beta)
        print(f"Parameters: {beta}")

    # print(betas)

    print("\nCreating visualization...")
    draw_points_and_lines(X, y, betas, quantiles)

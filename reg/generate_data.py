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

if __name__ == "__main__":
    # Example usage
    n_samples = 8  # Change sample size here
    n_features = 7  # Change feature count here

    print("Generating dataset...")
    X, y = generate_data_with_intercept(n_samples=n_samples, n_features=n_features, outlier_ratio=0.125)

    print("Generated X (with intercept):")
    print(X)
    print("\nGenerated y:")
    print(y)

    print("\nTransposing the feature matrix X...")
    X_transposed = matrix_transpose(X)
    print("Transposed X:")
    print(X_transposed)

    print("\nPlotting the data...")
    plot_data(X, y)

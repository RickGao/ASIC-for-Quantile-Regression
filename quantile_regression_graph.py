
import numpy as np
import matplotlib.pyplot as plt


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
    X = np.c_[np.ones(X.shape[0]), X]
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
        tau_minus_I = tau - I  # Vector subtraction (weight for each observation)
        gradient = -X.T @ tau_minus_I / n_samples  # Matrix-Vector multiplication and scaling

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
    plt.scatter(X[:, 0], y, color='gray', alpha=0.5, s=30, label='Data points')

    # Then draw lines for each quantile
    print("\nDrawing fitted lines...")
    x_range = np.linspace(X[:, 0].min(), X[:, 0].max(), 100).reshape(-1, 1)
    if X.shape[1] > 1:
        # For multiple features, use mean values for features beyond the first
        X_means = X[:, 1:].mean(axis=0)
        X_plot = np.hstack([x_range] + [np.full_like(x_range, mean) for mean in X_means])
    else:
        X_plot = x_range
    X_plot = np.c_[np.ones(len(x_range)), X_plot]

    colors = ['blue', 'green', 'red', 'purple', 'orange']
    for beta, tau, color in zip(betas, quantiles, colors):
        y_line = X_plot @ beta
        plt.plot(x_range, y_line, color=color, linewidth=2,
                label=f'{int(tau * 100)}th percentile')
        print(f"Fitted line for {int(tau * 100)}th percentile")

    plt.title('Data Points and Quantile Regression Lines')
    plt.xlabel('X')
    plt.ylabel('y')
    plt.grid(True, alpha=0.3)
    plt.legend()
    plt.show()


if __name__ == "__main__":
    # Generate data
    np.random.seed()
    n_samples = 8
    n_features = 7  # Change this number to adjust dimensions (e.g., 1, 2, 3, etc.)

    print("Generating data points...")
    # Generate X
    X = np.random.uniform(-3, 3, (n_samples, n_features))
    # print(f"X shape: {X.shape}")
    # print(f"X:\n{X}")

    # Generate y with increasing variance
    true_beta = np.array([1] + [2] * n_features)  # [intercept] + [slopes]
    noise = np.random.normal(0, 0.5 + 0.5 * np.abs(X).mean(axis=1), n_samples)
    y = true_beta[0] + X @ true_beta[1:] + noise

    # Add outliers
    print("Adding outliers...")
    outlier_idx = np.random.choice(n_samples, n_samples // 10, replace=False)
    y[outlier_idx] += np.random.normal(0, 5, size=len(outlier_idx))

    # Fit different quantiles
    print("\nFitting quantile regression models...")
    quantiles = [0.1, 0.25, 0.5, 0.75, 0.9]
    betas = []

    for tau in quantiles:
        print(f"Fitting {int(tau * 100)}th percentile...")
        beta = quantile_regression(X, y, tau=tau)
        betas.append(beta)
        print(f"Parameters: ", end="")
        param_names = ["Intercept"] + [f"X{i+1}" for i in range(n_features)]
        for name, value in zip(param_names, beta):
            print(f"{name} = {value:.4f}, ", end="")
        print()

    # Draw the points and lines
    print("\nCreating visualization...")
    draw_points_and_lines(X, y, betas, quantiles)

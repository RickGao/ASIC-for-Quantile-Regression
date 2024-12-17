import numpy as np
import matplotlib.pyplot as plt

# Read data.txt
with open('data.txt', 'r') as f:
    lines = f.readlines()

# Find separator between X and y
separator_index = lines.index('# Target Variable\n')

# Parse X matrix and y values
X = np.loadtxt(lines[1:separator_index])  # Skip header
y = np.loadtxt(lines[separator_index+1:])

# Read coefficients from results.txt
beta = np.loadtxt('result.txt', delimiter=',')

# Create plot
plt.figure(figsize=(12, 8))

# Plot data points
plt.scatter(X[:, 1], y, color='blue', alpha=0.5, label='Data points')

# Create line using first feature
x_range = np.linspace(X[:, 1].min(), X[:, 1].max(), 100)
# Calculate mean of other features
other_features_mean = X[:, 2:].mean(axis=0)
# Create prediction points
X_line = np.column_stack([
    np.ones_like(x_range),  # intercept
    x_range,               # first feature
    np.tile(other_features_mean, (len(x_range), 1))  # other features at their means
])
y_line = X_line @ beta

# Plot the line
plt.plot(x_range, y_line, color='red', linewidth=2, label='Fitted Line')

plt.title('Quantile Regression Results')
plt.xlabel('Feature 1')
plt.ylabel('Target Variable')
plt.grid(True, alpha=0.3)
plt.legend()

# Save plot
plt.savefig('quantile_regression_plot.png')
plt.show()

# Print some statistics
print("\nStatistics:")
print(f"Number of data points: {len(y)}")
print(f"Mean absolute error: {np.mean(np.abs(y - X @ beta)):.4f}")
print(f"R-squared: {1 - np.sum((y - X @ beta)**2) / np.sum((y - np.mean(y))**2):.4f}")
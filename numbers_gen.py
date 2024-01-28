import random

# Set the range and number of unique random numbers
lower_bound = -5000
upper_bound = 5000
num_numbers = 10000

# Generate a list of unique random numbers
random_numbers = random.sample(range(lower_bound, upper_bound + 1), num_numbers)

# Print the result as a space-separated string
result_string = ' '.join(map(str, random_numbers))
print(result_string)
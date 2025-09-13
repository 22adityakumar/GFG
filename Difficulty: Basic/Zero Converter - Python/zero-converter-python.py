def pos(n):
  """
  Prints numbers from n-1 down to 0 for a positive n.
  Args:
    n: The positive input integer.
  """
  for i in range(n - 1, -1, -1):
    print(i, end=" ")

def neg(n):
  """
  Prints numbers from n up to 0 for a negative n.
  Args:
    n: The negative input integer.
  """
  for i in range(n, 1, 1):
    print(i, end=" ")
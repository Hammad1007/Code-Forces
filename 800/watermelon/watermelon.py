# https://codeforces.com/problemset/problem/4/A
def watermelon(n):
  if n < 1 or n > 100:  # check if the weight is valid or invalid
    print("Invalid.")
  elif n >= 1 and n <= 100:
    if n % 2 == 0:      # check if the weight is even number
      print("Yes.")
    else:
      print("No.")

n = int(input(()))
watermelon(n)  

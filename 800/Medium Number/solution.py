# https://codeforces.com/problemset/problem/1760/A

t = int(input("Enter the number of test cases: "))
print("The number of test cases are: ", t)

while t > 0:
  a = int(input("Enter a: "))
  b = int(input("Enter b: "))
  c = int(input("Enter c: "))
  print(f"The values are: {a}, {b} and {c}")
  if (a > b and a < c) or (a < b and a > c):
    print("The medium number is: ", a)
  elif (b > a and b < c) or (b < a and b > c):
    print("The medium number is: ", b)
  elif (c > a and c < b) or (c < a and c > b):
    print("The medium numebr is: ", c)
  t = t - 1

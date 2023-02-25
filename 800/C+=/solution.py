# https://codeforces.com/problemset/problem/1368/A

t = int(input("Enter the number of test cases: "))
print("The test cases are: ", t)
count = 0
while t > 0:
  a = int(input("Enter a: "))
  b = int(input("Enter b: "))
  n = int(input("Enter n: "))
  print("The values are: ", a, " ", b, " ", n)
  a = a + b
  while a <= n:
    count = count + 1
    a = a + b
  print("Count is: ", count + 1)
  t = t - 1

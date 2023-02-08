# https://codeforces.com/problemset/problem/1296/A

t = int(input("Enter the number of test cases: "))
print("The test cases are: ", t)

while t > 0:
  a = []
  n = int(input("Enter the size of array: "))
  print("The size of array is: ", n)
  for i in range(n):
    l = int(input())
    a.append(l)
  print("The array is: ", a)
  sum = 0
  for i in range(0, n, 1):
    sum = sum + a[i]
  if sum % 2 == 1:
    print("YES.\n")
  else:
    print("NO.\n")
  t = t - 1

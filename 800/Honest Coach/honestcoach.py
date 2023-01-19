# https://codeforces.com/problemset/problem/1360/B

import random

t = int(input("Enter the number of test cases: "))    # test cases
print("The test cases are: ", t)

while t > 0:
  arr = []
  A = []
  B = []
  n = int(input("Enter the size of array: "))
  print("The array size is: ", n)
  for i in range(n):
    l = int(input())
    arr.append(l)
  print("The array is: ", arr)
  if n % 2 == 0:
    mid = (n // 2) - 1
    for i in range(0, n - 1, 1):
      for j in range(0, mid, 1):
        A.append(arr[i])
      print("Array A is: ", A)
      for j in range(n // 2, n, 1):
        B.append(arr[j])
      print("Array B is: ", B)
  elif n % 2 == 1:
    mid = (n // 2)
    for i in range(0, n - 1, 1):
      for j in range(0, mid, 1):
        A.append(arr[i])
      print("Array A is: ", A)
      for j in range(n // 2 + 1, n, 1):
        B.append(arr[j])
      print("Array B is: ", B)

  print("Largest number in array A is: ", max(A))
  print("Smallest number in array B is: ", min(B))
  print("The minimum value is: ", abs(max(A) - min(B)))

  t = t - 1           # decrement in the test case number

# Code here

# https://codeforces.com/problemset/problem/1512/A

# Check for the different number
def Compare(a, n):
  for i in range(0, n-1, 1):
    if a[i] != a[i + 1]:
      print("Index: ", i)

# Take input in test cases
cases = int(input("Enter the the number of test cases: "))
print("The test cases are: ", cases)

while cases > 0:
  a = []    # empty list
  n = int(input("The size of array: "))
  print("The array size is: ", n)
  for i in range(n):
    l = int(input())
    a.append(l)
  print("The array is: ", a)

  Compare(a, n)
  cases = cases - 1

# https://codeforces.com/problemset/problem/282/A

a = []  # empty list
x = 0
n = int(input("Enter the number: "))
for i in range(0, n):
  l = input()
  a.append(l)
print("The array is: ", a)
for i in range(0, n):
  if a[i] == '+':
    x = x + 1
  elif a[i] == '-':
    x = x - 1
    
print("The value of x is: ", x)

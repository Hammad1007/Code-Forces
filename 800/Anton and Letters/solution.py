# https://codeforces.com/problemset/problem/443/A

a = []    # empty list
count = 0
n = int(input("Enter the size of characters in the array: "))
for i in range(n):
  l = input()
  a.append(l)
print("Array is: {", a, "}")
b = a
for i in range(0, n - 1, 1):
  if b[i] != b[i + 1]:
    count = count + 1
print("Count is: ", count + 1)

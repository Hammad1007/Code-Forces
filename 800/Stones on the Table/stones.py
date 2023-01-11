# https://codeforces.com/problemset/problem/1742/A

n = int(input("Enter the number of stones: "))
print("Stones are: ", n)
a = []
count = 0
for i in range(0, n):
  l = input()
  a.append(l)

print("The array is: ", a)
for i in range(0, n, 1):
  if a[i] == a[i + 1]:
    count = count + 1

print("Count of stones: ", count)

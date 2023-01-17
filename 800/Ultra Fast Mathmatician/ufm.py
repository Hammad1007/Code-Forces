# https://codeforces.com/problemset/problem/61/A

size = int(input("Enter the size: "))
n = []
x = []
a = []    # answer array

for i in range(size):
  l = int(input())
  n.append(l)
print("Number1 is: ", n)

for i in range(size):
  l = int(input())
  x.append(l)
print("Number2 is: ", x)

for i in range(len(n)):
  if n[i] == x[i]:
    a.append(0)
  else:
    a.append(1)

print("Number3 is: ", a)

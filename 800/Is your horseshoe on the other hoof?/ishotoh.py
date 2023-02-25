# https://codeforces.com/problemset/problem/228/A

a = []      # empty array
count = 0   # count the number of minimum steps needed to change

print("Enter the input\n")
for i in range(4):
  l = int(input())
  a.append(l)
print("The number array is: ", a)

for i in range(0, 4, 1):
  for j in range(i + 1, 4, 1):
    if a[i] == a[j]:
      count = count + 1

print("The minimum number of steps are: ", count)

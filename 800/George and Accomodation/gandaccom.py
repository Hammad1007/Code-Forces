# https://codeforces.com/problemset/problem/467/A

n = int(input("Enter the number of rooms: "))
print("Rooms are: ", n)
count = 0
arr = []    # an empty list created
cols = 2
for i in range(n):
    col = []
    for j in range(cols):
      l = int(input())
      col.append(l)
    arr.append(col)
print(arr)

for i in range(n):
  for j in range(cols):
    if arr[i][1] - arr[i][0] >= 2:
      count = count + 1

# output the count of rooms available
print("Count is: ", count)

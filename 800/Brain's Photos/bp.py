# https://codeforces.com/problemset/problem/707/A

r = int(input("Enter the rows: "))
c = int(input("Enter the columns: "))
print("Rows are: ", r)
print("Columns are: ", c)
cc = 0
cb = 0
arr = []
for i in range(r):
    col = []
    for j in range(c):
      l = input()
      col.append(l)
    arr.append(col)
print("The array is: ", arr)

# now go for checking them
for i in range(r):
  for j in range(c):
    if arr[i][j] == 'C' or arr[i][j] == 'Y' or arr[i][j] == 'K':
      cc = cc + 1
    elif arr[i][j] == 'B' or arr[i][j] == 'G' or arr[i][j] == 'W':
      cb = cb + 1
    
print("Count of colored pixels: ", cc)
print("Count of black and white and gray pixels: ", cb)



# conditions to check
if cc > cb and cb == 0:
  print("#Color.\n")
elif cc < cb and cc == 0:
  print("#BlackandWhite.\n")
elif cb > cc and cc != 0:
  print("#Color.\n")



a = []
flag = 0
n = int(input("Enter the input size: "))
for i in range(0, n):
  l = int(input())
  a.append(l)
print("The array is: ", a)

for i in range(0, n):
  if a[i] != 1:
    flag = 0 #print("EASY.\n")
  elif a[i] == 1:
    flag = 1
if flag == 0:
  print("EASY.\n")
else:
  print("HARD.\n")

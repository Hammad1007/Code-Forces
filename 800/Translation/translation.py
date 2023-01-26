# https://codeforces.com/problemset/problem/41/A

a = []      # empty list
temp = []

n = int(input("Enter the size: " ))
print("The size is: ", n)

for i in range(n):
    l = input()
    a.append(l)
print("The array1 is: ", a)

for i in range(n):
    m = input()
    temp.append(m)
print("The array1 is: ", temp)

for i in range(n):
    if a[i] == temp[n - i - 1]:
        flag = 1
    else:
        flag = 0
        
if flag == 1:
    print("Yes.\n")
elif flag == 0:
    print("No.\n")

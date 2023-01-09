# 

a = []
sum = 0
n = int(input("Number of elements in array:"))
for i in range(0,n):
   l = int(input())
   a.append(l)
print(a)
for i in range(0, n):
  sum = sum + a[i]

print("The sum is: ", sum)
temp = n * 100
val = sum % temp
val1 = val / n
print("Percentage: ", val1)

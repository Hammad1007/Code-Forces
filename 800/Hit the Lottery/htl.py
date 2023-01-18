# https://codeforces.com/problemset/problem/996/A

def minimum(a = []):
  min = a[0]
  for i in range(1, 6, 1):
    if(a[i] < min):
      min = a[i]
  return min

n = int(input("Enter the number: "))
print("The number is: ", n)
d = [1, 5, 10, 20, 50, 100]
print("The denomination array is: ", d)
diffarr = [];
count = 0
while n != 1 or n != 5 or n != 10 or n!= 20 or n != 50 or n != 100:
  for i in range(len(d)):
    diffarr[i] = n - d[i]
    if diffarr[i] < 0:
      diffarr[i] = 1000000000000
  
  print("The difference array is: ", diffarr)
  #print("\n")
  temp = n - minimum(d);
  flag = n / temp;
  count = count + flag;
  n = n - flag * (n - minimum(d));
  
if n == 1 or n == 5 or n == 10 or n == 20 or n == 50 or n == 100:
  count = count + 1

print("The minimum number of denominations are: ", count)


# https://codeforces.com/problemset/problem/1472/B

# Question

n = int(input("Enter the test cases: "))
print("The test cases are: ", n)
sum = 0
while n > 0:
  a = []
  num = int(input("Enter the number of candies: "))
  print("The candies are: ", num)
  for i in range(num):
    l = int(input())
    a.append(l)
  print("The array is: ", a)
  for i in range(num):
    sum = sum + a[i]
  print("The sum of the array elements is: ", sum)
  if num % 2 == 0 and sum % 2 == 0:
    print("Yes.\n")
  else:
    print("No.\n")
  n = n - 1

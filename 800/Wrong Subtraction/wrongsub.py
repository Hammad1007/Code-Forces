# https://codeforces.com/problemset/problem/977/A

n = int(input("Enter the number: "))
k = int(input("Enter the number of operations: "))
print("Number = ", n)
print("Operatons to be performed = ", k)
for i in range(k):
  if n % 10 != 0:
    n = n - 1
  elif n % 10 == 0:
    n = n / 10

print("The new value of number: ", n)

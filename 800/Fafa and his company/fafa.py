# https://codeforces.com/problemset/problem/935/A

n = int(input("Enter the number of employees: "))
print(f"Fafa has {n} employees in his company.")

count = 0
i = 1
while i < n:
  if n % i == 0:
    count = count + 1
  i = i + 1
print("The minimum numebr is: ", count)


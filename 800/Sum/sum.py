# https://codeforces.com/problemset/problem/1742/A

n = int(input("Enter the number of test cases: "))
print("Test cases are: ", n)

while n > 0:
  a = []
  for i in range(0, 3):
    l = int(input())
    a.append(l)

  print("The array is: ", a)
  if a[0] + a[1] == a[2] or a[0] + a[2] == a[1] or a[1] + a[2] == a[0]:
    print("YES.")
  else:
    print("NO.")

  n = n - 1

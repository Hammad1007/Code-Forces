# https://codeforces.com/problemset/problem/1328/A

def divisibleby(x, y):
  if x % y == 0:
    temp = 0
  else:
    temp = x % y
    temp = y - temp
  return temp

n = int(input())
for i in range(n):
  a = int(input())
  b = int(input())
  print("Values of a and b are:", a, "and", b)
  val = divisibleby(a, b)
  print("The value is: ", val)

  

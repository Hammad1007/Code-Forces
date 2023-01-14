# https://codeforces.com/problemset/problem/1692/A

n = int(input("Enter the test cases: "))

while n > 0:
  a = int(input("Enter a: "))
  b = int(input("Enter b: "))
  c = int(input("Enter c: "))
  d = int(input("Enter d: "))
  print("a =", a)
  print("b =", b)
  print("c =", c)
  print("d =", d)
  if (a < 0 or a > 10000) and (b < 0 or b > 10000) and (c < 0 or c > 10000) and (d < 0 or d > 10000):
    print("The input is incorrect. Kindly enter a correct value for a, b, c, d")
  else:
    if a > b and a > c and a > d:
      print("The number of participants in front of Timur is 0")
    elif (a < b and a > c and a > d) or (a > b and a < c and a > d) or (a > b and a > c and a < d):
      print("The number of participants in front of Timur is 1")
    elif (a < b and a < c and a > d) or (a < b and a > c and a < d) or (a > b and a < c and a < d):
      print("The number of participants in front of Timur is 2")
    elif a < b and a < c and a < d:
      print("The number of participants in front of Timur is 3")
    elif a == b or a == c or a == d:
      print("Cannot handle equal values.")
  n = n - 1

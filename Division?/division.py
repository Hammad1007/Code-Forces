# https://codeforces.com/problemset/problem/1669/A

n = int(input("Enter the test cases: "))

while n > 0:
  r = int(input("Enter the rating value: "))
  if r < -5000 or r > 5000:
    print("Invalid rating")
  else:
    if r >= 1900 and r <= 5000:
      print("Division 1")
    elif r >= 1600 and r < 1900:
      print("Division 2")
    elif r >= 1400 and r < 1600:
      print("Division 3")
    elif r < 1400 and r >= -5000:
      print("Division 4")
  n = n - 1

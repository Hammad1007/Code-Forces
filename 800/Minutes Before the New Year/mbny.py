# https://codeforces.com/problemset/problem/1283/A

# input the test cases
n = int(input("Enter the number of test cases: "))

# loop to go for the number of test cases
for i in range(n):
  h = int(input("Enter the hours: "))
  m = int(input("Enter the minutes: "))
  print("Hours = ", h)
  print("Minutes = ", m)
  m = (h * 60) + m
  rm = 1440 - m
  print("Remaining minutes are: ", rm)
  print("\n")


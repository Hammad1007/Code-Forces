# https://codeforces.com/problemset/problem/1703/A

def compare(s):
  if len(s) < 3 or len(s) > 3:
    print("Invalid.\n")
  elif len(s) == 3:
    if ((s[0] == 'y' or s[0] == 'Y') and (s[1] == 'e' or s[1] == 'E') and (s[-1] == 's' or s[-1] == 'S')):
      print("Yes.\n")
    else:
      print("No.\n")

n = int(input())
for i in range(n):
  temp = input()
  compare(temp)

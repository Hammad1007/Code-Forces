# https://codeforces.com/problemset/problem/617/A

floc = int(input())   # friend location
steps = 0             # no of steps
if floc <= 0:
  print("Invalid position of the friend.\n")
else:
  if floc == 1 or floc == 2 or floc == 3 or floc == 4 or floc == 5:
    steps = steps + 1
    print("Minimum number of steps needed are: ", steps)
  else:
    if floc % 5 == 0:
      steps = floc / 5;
      print("Minimum steps needed are: ", steps)
    else:
      temp = floc % 5;
      if temp == 1 or temp == 2 or temp == 3 or temp == 4 or temp == 5:
        steps = 1;
      floc = floc - temp;
      steps = steps + (floc / 5)
      print("Minimum steps needed are: ", steps)

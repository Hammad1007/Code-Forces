# https://codeforces.com/problemset/problem/791/A

a = int(input())    # Limak's weight
b = int(input())    # Bobs' weight
count = 1
print("The values are: ", a, "and", b)

if((a >= 1 and a <= 10) and (b >= 1 and b <= 10)):
  if a <= b:
    if a == b:
      count = 1
    else:
      while a <= b:
        a = a * 3
        b = b * 2
        if a <= b:
          count = count + 1
  print("The count is: ", count)
else:
  print("Invalid input.\n")
        

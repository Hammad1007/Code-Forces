# https://codeforces.com/problemset/problem/1692/A

n = int(input("Enter the size: "))
print("The size is: ", n)

countA = 0
countD = 0
a = []
for i in range(n):
  l = input()
  if l == "A":
    #capitalize()
    countA = countA + 1
  if l == "D":
    #capitalize()
    countD = countD + 1
  a.append(l)

print("The array is: ", a)
print("The count of A is: ", countA)
print("The count of D is: ", countD)

if countA > countD:
  print("Anton")

elif countA < countD:
  print("Danik")

elif countA == countD:
  print("Friendship")

# https://codeforces.com/problemset/problem/381/A

a = []    # empty array1
b = []    # empty array2

Sereja_count = 0
Dima_count = 0

n = int(input("Enter the number of cards on the table: "))
print("The number of cards are: ", n)

for i in range(n):
  print("Enter the input at index ", i, ": ")
  l = int(input())
  a.append(l)
print("The array is: ", a)
b = a

# sort the list in descending order
b.sort(reverse = True)
print("The reverse array is: ", b)

for i in range(len(b)):
  if i % 2 == 0:
    Sereja_count = Sereja_count + b[i]
  else:
    Dima_count = Dima_count + b[i]

print("Sereja's score: ", Sereja_count)
print("Dima's score: ", Dima_count)
    

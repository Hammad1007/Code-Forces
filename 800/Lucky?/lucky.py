# https://codeforces.com/problemset/problem/1676/A

n = int(input("Enter the test cases: "))
print("The test cases are: ", n)

while n > 0:
    a = []      # empty array
    for i in range(6):
        l = int(input())
        a.append(l)
    print("The array is: ", a)
    
    if a[0] + a[1] + a[2] == a[3] + a[4] + a[5]:
        print("Yes.\n")
    else:
        print("No.\n")
        
    n = n - 1       # decrement in test cases

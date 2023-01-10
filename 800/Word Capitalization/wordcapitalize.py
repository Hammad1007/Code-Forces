# https://codeforces.com/problemset/problem/281/A

word = input("Enter the string: ")
print("The original word is: ", word)    # original string

res = word[0].upper() + word[1:]        # first letter is upper while rest are as it is
print("The converted sting is: ", res)

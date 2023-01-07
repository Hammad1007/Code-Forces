# // https://codeforces.com/problemset/problem/71/A

def function(word): # function to do work
  if len(word) > 0 and len(word) <= 10:   # check the conditions now
    print("Not too long word.\n")
  elif len(word) <= 0:    # word length less than equal to 0
    print("Invalid length.\n")
  else:
    print("The word is: ", word[0] + str(len(word) - 2) + word[len(word) -1])
    print("\n")

n = int(input())    # take the number of words as input
for i in range(n):  # for loop 
  word = input()
  function(word)

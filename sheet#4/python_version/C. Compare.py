s = input().strip()
val1, val2 = s.split()

if val1 > val2:
    print(val2)
else:
    print(val1)

#input from two different lines? 
# Read the two strings from separate lines
X = input().strip()
Y = input().strip()

# Compare the strings lexicographically and print the smaller one
if X < Y:
    print(X)
else:
    print(Y)

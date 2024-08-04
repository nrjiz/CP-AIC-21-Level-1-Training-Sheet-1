string1 = input().strip()
string2 = input()

print(len(string1),len(string2))

print(string1+string2)

swapped1 = string1[0]+string2[1:]
swapped2 = string2[0]+string1[1:]
print(swapped2,swapped1)

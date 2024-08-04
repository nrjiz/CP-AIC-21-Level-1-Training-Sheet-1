expression = input().strip()
sum_digits=0

for ch in expression:
    sum_digits+=int(ch)

print(sum_digits)

sum_digits1=sum(int(ch) for ch in expression)

print(sum_digits1)


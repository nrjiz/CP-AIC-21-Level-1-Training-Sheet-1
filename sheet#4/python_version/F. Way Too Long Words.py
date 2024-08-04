def abbreviated_word(word_input):
    if len(word_input)>10:
        return f"{word_input[0]}{str(len(word_input)-2)}{word_input[-1]}"
    else:
        return word_input


test_cases=int(input())
for _ in range(test_cases):
    word=input().strip()
    print(abbreviated_word(word))

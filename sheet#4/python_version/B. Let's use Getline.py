def print_until_backslash(S):
    # Find the position of the first occurrence of '\'
    pos = S.find('\\')
    # Print the substring from the beginning to the position of the first '\'
    print(S[:pos])

# Example usage
if __name__ == "__main__":
    S = input().strip()
    print_until_backslash(S)

def print_christmas_tree(N):
    if N % 2 == 0:
        N += 1  # Make sure N is odd

    for i in range(1, N + 1, 2):
        spaces = " " * ((N - i) // 2)
        stars = "*" * i
        print(spaces + stars + spaces)

    trunk_height = N // 3
    trunk_width = N // 2

    for _ in range(trunk_height):
        spaces = " " * (N // 2)
        trunk = "|" * trunk_width
        print(spaces + trunk + spaces)

N = int(input())
print_christmas_tree(N)

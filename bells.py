n = int(input())
line = (n + 1) // 2 + 5
sp = line - 1
st = 1

for i in range(1, line + 1):
    print(" " * sp + "*" * st)
    sp -= 1
    st += 2

start = ((line * 2) - 1 - n) // 2

for i in range(1, 6):
    print(" " * start + "*" * n)

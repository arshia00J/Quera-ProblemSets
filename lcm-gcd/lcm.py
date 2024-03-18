a, b = map(int, input().split())
m = 1

while True:
    if m % a == 0 and m % b == 0:
        break
    m += 1

print(a * b // m, m)

n = int(input())
supermarkets = [input() for _ in range(n)]

answer = True

first = int(input())
end = int(input())

for i in range(first, end + 1):
    found = False
    for supermarket in supermarkets:
        a, b = map(int, supermarket.split())
        if a <= i <= b:
            found = True
            break
    if not found:
        answer = False
        break

print(str(answer).lower())

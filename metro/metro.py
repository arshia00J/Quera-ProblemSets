row1 = input().split()
row2 = input().split()

pairs = sum(1 for a, b in zip(row1, row2) if a == '1' and b == '1')

print(pairs)

table = input().lower()

red = 0
yellow = 0
green = 0

for color in table:
    if color == 'r':
        red += 1
    elif color == 'y':
        yellow += 1
    elif color == 'g':
        green += 1

if red >= 3 or (red >= 2 and yellow >= 2) or (red == len(table)) or (yellow == len(table)) or (yellow == 4 and red == 1):
    print('nakhor lite')
else:
    print('rahat baash')

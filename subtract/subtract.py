def game(number):
    first = number // 10
    second = number % 10

    return abs(first - second)

def separator(ls):
    even = []
    odd = []
    for i in ls:
        if i % 2 == 0:
            even.append(i)
        else:
            odd.append(i)
    return (even, odd)

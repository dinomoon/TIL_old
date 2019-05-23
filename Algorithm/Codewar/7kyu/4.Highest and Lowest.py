# ex) '1 2 3 4 5' -> '5 1'

# 내 풀이
def high_and_low(numbers):
    a = numbers.split()
    for i in range(len(a)):
        a[i] = int(a[i])
    return "{} {}".format(max(a), min(a))

# 사람들 풀이
def high_and_low(numbers):
    nn = [int(s) for s in numbers.split(" ")]
    return "{} {}".format(max(nn), min(nn))

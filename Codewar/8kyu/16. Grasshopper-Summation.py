# 1부터 입력받은 수까지의 자연수의 합
# 내 풀이
def summation(num):
    sum = 0
    for i in range(1, num+1):
        sum += i

# 사람들 풀이
def summation(num):
    return num * (num + 1) / 2


def summation(num):
    return sum(range(1, num+1))

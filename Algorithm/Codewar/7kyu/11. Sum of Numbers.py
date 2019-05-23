# ex) a부터 b까지의 합... 만약 a와 b가 같으면 a또는 b를 돌려줌

# 내 풀이
def get_sum(a,b):
    if a == b:
        return a
    elif a < b:
        for i in range(a+1, b+1):
            a += i
        return a
    else:
        for i in range(b+1, a+1):
            b += i
        return b

#  사람들 풀이
def get_sum(a,b):
    return sum(range(min(a,b), max(a,b) + 1))

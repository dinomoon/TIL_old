# ex) 'moon apple phone' -> 4


# 내 풀이
def find_short(s):
    a = s.split()
    min = len(a[0])
    for i in range(len(a)):
        if min > len(a[i]):
            min = len(a[i])
    return min

# 사람들 풀이
def find_short(s):
    return min(len(x) for x in s.split())

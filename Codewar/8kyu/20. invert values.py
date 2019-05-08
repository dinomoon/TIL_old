# 리스트의 값들을 부호를 반대로 만들어서 돌려주기

# 내 풀이
def invert(lst):
    result = []
    if len(lst) == 0:
        return result
    for i in range(len(lst)):
        temp = lst[i] * -1
        result.append(temp)
    return result

# 사람들 풀이
def invert(lst):
    return [-x for x in lst]

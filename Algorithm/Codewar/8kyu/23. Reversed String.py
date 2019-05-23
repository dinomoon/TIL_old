# 문자열 뒤집기
# ex) 'abc' -> 'cba'

# 내 풀이
def solution(string):
    i = len(string)
    result = ''
    while i>0:
        result = result + string[i-1]
        i = i - 1
    return result


# 사람들 풀이
def solution(string):
    return string[::-1]

# 가운데 문자를 돌려주는 함수
# ex) 'abc' -> 'b'   // 'abcd' -> 'bc'
# 내 풀이

def get_middle(s):
    result = ''
    num = len(s)
    if num % 2 == 0:
        a = num / 2
        result = result + s[a-1] + s[a]
    else:
        a = num // 2
        result = result + s[a]
    return result

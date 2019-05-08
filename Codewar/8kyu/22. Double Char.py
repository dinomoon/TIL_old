# ex) 'abc' -> 'aabbcc'

# 내 풀이
def double_char(s):
    result = ''
    for i in range(len(s)):
        result = result + s[i] * 2
    return result

# 사람들 풀이
def double_char(s):
    return ''.join(c * 2 for c in s)

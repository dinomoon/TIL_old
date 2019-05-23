## 문자열이 주어지면 첫번째 문자와 마지막 문자를 없애서 돌려주는 함수

#내 풀이
def remove_char(s):
    b = list(s)
    del b[0]
    del b[-1]
    return ''.join(b)

print(remove_char('abc'))

#사람들 풀이
def remove_char(s):
    return s[1:-1]  #list의 1번째 부터 -1(마지막)전!!!까지만!

# 제곱수인지 아닌지 알려주는 함수

# 내 풀이
import math

def is_square(n):
    if n < 0:
        return False
    a = math.sqrt(n)
    if int(a) == a:
        return True
    return False

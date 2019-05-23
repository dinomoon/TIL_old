### 짝수면 Even 홀수면 Odd를 돌려주는 함수

#내 풀이
def even_or_odd(number):
    if number % 2 == 0:
        return "Even"
    else:
        return "Odd"

#사람들 풀이
def even_or_odd(number):
    return "Even" if number % 2 == 0 else "Odd"

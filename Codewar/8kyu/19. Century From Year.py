#문제: 년도를 알려주면 세기를 돌려주는 함수

# 내 풀이
def century(year):
    if year % 100 == 0:
        return year // 100
    return year // 100 + 1

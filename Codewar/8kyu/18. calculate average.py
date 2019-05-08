# 평균 구하는 함수

def find_average(array):
    if len(array) != 0:
        return sum(array)/len(array)
    return 0

def find_average(array):
    return sum(array)/len(array) if array else 0

#문제: 리스트를 넣어주면 양수만 더해서 돌려주는 함수 만들기

#내 풀이
def positive_sum(arr):
    sum = 0
    for i in range(len(arr)):
        if arr[i] > 0 :
            sum = arr[i] + sum
    return sum

#사람들 풀이
def positive_sum(arr):
    sum = 0
    for e in arr:
        if e > 0;
            sum = sum + e
    return sum

##
def positive_sum(arr):
    return sum(x for x in arr if x > 0)

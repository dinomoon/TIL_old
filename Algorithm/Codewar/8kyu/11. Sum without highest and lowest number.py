# 최대값괴 최솟값을 제외하고 더해주는 함수
#내 풀이
def sum_array(arr):
    if arr==None or len(arr)==1 or len(arr)==2:
        return 0
    else:
        a = min(arr)
        b = max(arr)
        c = sum(arr)
    return c-a-b

##
def sum_array(arr):
    if arr==None or len(arr)==1 or len(arr)==2:
        return 0
    else:
        min = arr[0]
        for i in arr:
            if min > i:
                min = i
        max = arr[0]
        for i in arr:
            if max < i:
                max = i
    return sum(arr)-min-max


#사람들 풀이
def sum_array(arr):
    if arr == None or len(arr) < 3:
        return 0
    return sum(arr) - max(arr) - min(arr)

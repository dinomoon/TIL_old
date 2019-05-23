## 배열에서 가장 작은 정수 찾기

#내 풀이
def findSmallestInt(arr):
    min = arr[0]
    for i in range(len(arr)):
        if min > arr[i]:
            min = arr[i]
    return min

#사람들 풀이
def findSmallestInt(arr):
    return min(arr)


def findSmallestInt(arr):
    arr.sort()          ##오름차순으로 정렬해줌..!
    return arr[0]

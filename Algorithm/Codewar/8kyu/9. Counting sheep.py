## 양의 개수를 세는 함수...
## [True, False, True, True] 이면 3마리!!

#내 풀이
def count_sheeps(arrayOfSheeps):
    sum = 0
    for i in range(len(arrayOfSheeps)):
        if arrayOfSheeps[i] == True:
            sum += 1
    return sum

#사람들 풀이
######
def count_sheeps(arrayOfSheeps):
    return arrayOfSheeps.count(True) ##count...!

#####
def count_sheeps(arrayOfSheeps):
    count = 0
    for sheep in arrayOfSheeps:
        if sheep:
            count += 1
    return count

#####
def count_sheeps(arrayOfSheeps):
    return len([x for x in arrayOfSheeps if x])

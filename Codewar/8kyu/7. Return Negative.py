## 주어진 수가 양수이면 음수로 돌려주는 함수

#내 풀이
def make_negative(number):
    return -number if number > 0 else number

#사람들 풀이
#####
def make_negative(number):
    return -abs(number)


######
def make_negative(number):
    if number > 0:
        return (0 - number)
    else:
        return number
        
######
def make_negative(number):
    return (-1) * abs(number)

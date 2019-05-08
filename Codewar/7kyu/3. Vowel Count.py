# a,e,i,o,u 모음의 개수를 알려주는 함수

# 내 풀이
def getCount(inputStr):
    a = inputStr.count('a')
    e = inputStr.count('e')
    i = inputStr.count('i')
    o = inputStr.count('o')
    u = inputStr.count('u')
    return a+e+i+o+u


# 사람들 풀이
def getCount(inputStr):
    num_vowels = 0
    for char in inputStr:
        if char in "aeiouAEIOU":
            num_vowels = num_vowels + 1
    return num_vowels

##
def getCount(inputStr):
    return sum(c in 'aeiou' for c in inputStr)

###
def getCount(inputStr):
    return sum(1 for let in inputStr if let in "aeiouAEIOU")

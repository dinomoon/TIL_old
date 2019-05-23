#list에서 needle의 인덱스 찾기
#내 풀이
def find_needle(haystack):
    for i in range(len(haystack)):
        if haystack[i] == 'needle':
            return 'found the needle at position {}'.format(i)


print(find_needle([1,2,'needle']))


#사람들 풀이
def find_needle(haystack): return 'found the needle at position %d' % haystack.index('needle')

###
def find_needle(haystack):
    return 'found the needle at position {}'.format(haystack.index('needle'))

###
def find_needle(haystack):
    return 'found the needle at position ' + str(haystack.index("needle"))

###
def find_needle(haystack):
    for i, x in enumerate(haystack):
        if x == 'needle':
            return 'found the needle at position %d' % i

###
def find_needle(haystack):
    return 'found the needle at position {position}'.format(position = haystack.index('needle'))

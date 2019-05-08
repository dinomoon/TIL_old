#각각의 숫자를 리스트에 추가하는데..단,, 거꾸로...
# ex) n =1234 => result = [4,3,2,1]
#내 풀이
def digitize(n):
    result = []
    a = str(n)
    for i in range(len(a)):
        result.insert(0, int(a[i]))
    return result
print(digitize(1234))

#사람들 풀이
def digitize(n):
    return map(int, str(n)[::-1])

##### map...?  => map(function, iterables)  iterable: 반복가능한
##### def myfunc(n):
#####   return len(n)
#####
##### x = map(myfunc, ('apple', 'banana', 'cherry')) => [5,6,6]

###
def digitize(n):
    return [int(x) for x in str(n)[::-1]]   #### seq[start:end:step]

##### range(10)[::2]  => [0,2,4,6,8]
##### range(10)[::-1] => [9,8,7,6,5,4,3,2,1,0]

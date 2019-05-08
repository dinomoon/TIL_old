# ex) 9119 -> 811181

# 내 풀이
def square_digits(num):
    b = [x for x in str(num)]
    print(b)
    c = []
    for i in b:
        c.append(int(i))
    d = []
    for i in c:
        d.append(str(i*i))
    e = ''.join(d)
    return int(e)

print(square_digits(9119))

# 사람들 풀이
def square_digits(num):
    result = ""
    for x in str(num):
        result += str(int(x)**2)
    return int(result)
print(square_digits(9119))

##
def square_digits(num):
    return int(''.join(str(int(d)**2) for d in str(num)))
print(square_digits(9119))

def square_digits(num):
    return int(''.join([str(int(d)**2) for d in str(num)]))

print(square_digits(9119))

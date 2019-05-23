# ex) 12345 -> 54321

# 내 풀이
def Descending_Order(num):
    a = []
    b = []
    c = []
    a = [x for x in str(num)]
    for i in a:
        b.append(int(i))
    b.sort(reverse = True)
    for i in b:
        c.append(str(i))
    c = ''.join(c)
    return int(c)


# 사람들 풀이
def Descending_Order(num):
    s = str(num)
    s = list(s)
    s = sorted(s)
    s = reversed(s)
    s = ''.join(s)
    return int(s)

print(Descending_Order(123))

##
def Descending_Order(num):
    return int("".join(sorted(str(num), reverse=True)))) # 문자열을 sorted 하면 리스트로 바뀜..!

###
def Descending_Order(num):
    return int("".join(sorted(list(str(num), reverse=True))))

# ex) 'abcde' -> 'A-Bb-Ccc-Dddd-Eeeee'

# 내 풀이
def accum(s):
    result = ''
    for i in range(len(s)):
        s = s.upper()
        result = result + s[i]
        s = s.lower()
        result = result  + s[i]*i
        if i != len(s)-1:
            result += '-'
    return result

# 사람들 풀이
def accum(s):
    return '-'.join(c.upper() + c.lower() * i for i,c in enumerate(s))

# enumerate
names = ['철수','영희','맹구']
for i,name in enumerate(names):
    print("{}번: {}".format(i,name))

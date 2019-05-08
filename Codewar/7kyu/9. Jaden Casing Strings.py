# ex) "how are you?" -> "How Are You?"

# 내 풀이
def toJadenCase(string):
    a = string.split()
    b = []
    for i in a:
        b.append(i.capitalize())
    return ' '.join(b)


# 사람들 풀이
def toJadenCase(string):
    return " ".join(w.capitalize() for w in string.split())

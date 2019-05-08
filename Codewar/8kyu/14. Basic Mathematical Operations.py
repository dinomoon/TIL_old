# 사칙연산해주는 함수
# 내 풀이

def basic_op(operator, value1, value2):
    if operator == "+":
        return value1 + value2
    elif operator == "-":
        return value1 - value2
    elif operator == "*":
        return value1 * value2
    else:
        return value1 / value2


# 사람들 풀이

def basic_op(operator, value1,value2):
    return eval("{}{}{}".format(operator, value1, value2))

##### eval.....?
##### w3schools.com
#####   ex) x = 'print(55)'
####        eval(x) => 55

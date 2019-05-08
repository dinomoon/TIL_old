# ex) bonus_time(10, True) -> '$100'
# ex) bonus_time(10, Flase) -> '$10'

# 내 풀이
def bonus_time(salary, bonus):
    result = ''
    if bonus:
        real_salary = salary * 10
        return result + '$' + str(real_salary)
    return result + '$' + str(salary)


# 사람들 풀이
def bonus_time(salary, bonus):
    return '${}'.format(salary*(10 if bonus else 1))

##
def bonus_time(salary, bonus):
    if bonus:
        return "$" + str(salary*10)
    return "$" + str(salary)

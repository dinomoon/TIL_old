# boolean이 True이면 Yes를 False이면 No를 돌려주는 함수
# 내 풀이
def bool_to_word(bool):
    return "Yes" if bool == True else False

# 사람들 풀이
def bool_to_word(bool):
    return "Yes" if bool else False

def bool_to_word(bool):
    if bool:
        return "Yes"
    return "No"

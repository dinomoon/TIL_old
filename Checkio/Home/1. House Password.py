# 1. 10자 이상
# 2. 숫자, 영어 소문자, 대문자 모두 들어가야함
# 두 가지 조건을 모두 만족시키면 True,
# 그렇지 않으면 False를 리턴하는 함수만들기


def checkio(password):
    if len(password) < 10:
        return False
    if all(x.isalnum() for x in password) and any(x.islower() for x in password) and any(x.isupper() for x in password) and any(x.isdigit() for x in password):
        return True
    else:
        return False


print(checkio("abcsadsadsadasdsad1"))

## string.isalpha(): string이 알파벳으로만 이루어져있니?
## string.isalnum(): string이 알파벳 또는 숫자로 이루어져있니?
## string.islower(): string이 소문자로만 이루어져있니?
## string.isupper(): string이 대문자로만 이루어져있니?
## string.digit(): string이 숫자로만 이루어져있니?

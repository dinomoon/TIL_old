#18.10.21
#1. 문장이 주어지면 제일 앞 문자를 대문자로 바꾼다.
#2. 만약 문장이 마침표로 끝나지 않는다면 마침표를 찍어준다.

def correct_sentance(text):
    text = text[0].upper() + text[1:]
    if text[-1] != ".":
        text += "."
    return text

print(correct_sentance("print"))

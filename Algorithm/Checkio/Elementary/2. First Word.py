#18.10.21
#문장에서 첫 번째 단어를 돌려주기
# ex) first_word("Hello world") == "Hello"
# ex) first_word("greetings, friends") == "greetings"
# ex) first_word("... and so on ...") == "and"

def first_word(sentance):
    result = sentance.split()
    if result[0][-1] == ',':
        return result[0][:-1]
    return result[0]

print(first_word("greetings, friends"))
print(first_word("... and so on ..."))

# ==> 3번째 예시에서 잘 동작하지 않음

def first_word(sentance):
    sentance = sentance.replace(","," ").replace("."," ").strip()
    sentance = sentance.split()
    return sentance[0]

print(first_word("greetings, friends"))
print(first_word("... and so on ..."))

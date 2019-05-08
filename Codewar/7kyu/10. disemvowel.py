# 문자열에서 모음 지워서 돌려주는 함수
# ex) "This website is for losers LOL!" -> "hs wbst s fr lsrs LL!"


# 내 풀이
def disemvowel(string):
    for i in 'aeiouAEIOU':
        string = string.replace(i,'')
    return string

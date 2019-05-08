# 공백 없애기
##내 풀이
def no_space(x):
    return x.replace(" ","")

##사람들 풀이
def no_space(x):
    return "".join(x.split())

#### string.split()과 "".join(list)....
#### string.split(): string의 공백을 기준으로 각각 리스트의 원소로 만들어짐
#### ex) string = "Hello world"
#### print(string.split()) => ['Hello','world']
#### ex) string = "Helloworld"
#### print(string.split()) => ['Helloworld']

#### "".join(list): 리스트의 원소들을 스트링으로 합칠 때 따옴표
#### 안의 공백만큼 거리를 두고 합쳐줌..

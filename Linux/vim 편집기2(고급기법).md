# 실습 목적
### 1. 문자열 찾고 교체할 수 있다.
### 2. 버퍼에 복사하기(yank)와 붙여넣기(put)와 삭제(delete) 기능을 수행할 수 있다.
### 3. 파일을 읽고 저장할 수 있다.
### 4. 편집기 작업환경 속성 바꿀 수 있다.
### 5. 기타 고급 기법들


# 1. 문자열을 찾고 교체할 수 있다.
### Step1. 다음의 내용을 vim으로 입력하라.
> $ vim substitute
```
Searching for and replacing a character, a string of text, 
or a string that is matched by a regular expression 
is a key feature of any editor. 
The vim editor provides simple commands 
for searching for a character on the current line.
It also provides more complex commands for searching for 
and optionally for single and multiple ocuurences of strings or regular expressions 
anywhere on the Work buffer.
```
> :w 또는 :w substitute (**저장**)

> 1G 또는 :1  (**1번 줄로 이동**)

> fa fa ; Fa ; ; ta ; ; Ta ; ;  (**a찾기**) + F, T는 역방향이고 f, F는 위 t, T는 앞뒤에 커서

> 0d2fo  (**처음부터(0) 2번 째 o(2o)까지 지운다(df)**)

> U  (**실행 취소**)

> /of / / n n N N  (**of찾기, 공백 찾기, 다음 것 찾기**) + N은 역방향

> /^for   (**for로 시작하는 줄을 검색하고 있으면 그 for의 f에 커서**)

> /for$   (**for로 끝나는 줄을 검색하고 있으면 그 for의 f에 커서**)

> /on   (**on찾기**) + 단어 속에 on이 있는 것도 찾음

> /|<on|>   (**on만 찾아줌**)

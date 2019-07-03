## 월요일 ~ 일요일 웹툰 제목 가져오기

```python
from bs4 import BeautifulSoup as bs
import requests
from pprint import pprint

html = requests.get("https://comic.naver.com/webtoon/weekday.nhn")
soup = bs(html.text, 'html.parser')

# 월요일 ~ 일요일 웹툰 영역 추출하기
data_list = soup.findAll('div', {'class':'col_inner'})
# pprint(data1)

week_title_list = []
for data1 in data_list:
    # 제목 포함 영역 추출하기
    data2 = data1.findAll('a', {'class': 'title'})
    # pprint(data2)

    # title_list = []
    # for title in data2:
    #     title_list.append(title.text)

    title_list = [title.text for title in data2]
    week_title_list.append(title_list)

pprint(week_title_list)
# week_title_list[0]은 월요일~
```

## 하나의 리스트안에 모든 제목을 넣으려면?
```python
data_list = soup.findAll('a', {'class': 'title'})
week_title_list = [t.text for t in data_list]
pprint(week_title_list)
```

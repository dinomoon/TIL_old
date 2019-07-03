## 월요웹툰 제목 가져오기

```python
from bs4 import BeautifulSoup as bs
import requests
from pprint import pprint

html = requests.get("https://comic.naver.com/webtoon/weekday.nhn")
soup = bs(html.text, 'html.parser')

data1 = soup.find('div', {'class':'col_inner'})
# pprint(data1)

data2 = data1.findAll('a', {'class': 'title'})
# pprint(data2)

# title_list = []
# for title in data2:
#     title_list.append(title.text)

title_list = [title.text for title in data2]

pprint(title_list)
```

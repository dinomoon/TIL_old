```python
from bs4 import BeautifulSoup as bs
from pprint import pprint
import requests

html = requests.get("https://search.naver.com/search.naver?sm=tab_hty.top&where=nexearch&query=%EB%A7%A4%ED%83%84%EB%8F%99+%EB%82%A0%EC%94%A8&oquery=%EB%82%A0%EC%94%A8&tqi=UexvrdprvmsssisZNqossssstnZ-361829")
# pprint(html.text)

soup = bs(html.text, 'html.parser')
# pprint(soup)

data = soup.find('div', {'class': 'detail_box'}) # 영역 추출
pprint(data.text)
```

```python
from bs4 import BeautifulSoup as bs
from pprint import pprint
import requests

# 날씨가 있는 웹페이지의 정보를 가져와 html에 저장
html = requests.get("https://search.naver.com/search.naver?sm=tab_hty.top&where=nexearch&query=%EB%A7%A4%ED%83%84%EB%8F%99+%EB%82%A0%EC%94%A8&oquery=%EB%82%A0%EC%94%A8&tqi=UexvrdprvmsssisZNqossssstnZ-361829")
# pprint(html.text)

# html에 있는 정보를 파싱..? (간편하게 정보를 다루기 위함)
soup = bs(html.text, 'html.parser')
# pprint(soup)

# find메소드를 사용해서 원하는 영역을 
data = soup.find('div', {'class': 'detail_box'}) # 영역 추출
pprint(data.text)
```

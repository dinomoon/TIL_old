```python
from bs4 import BeautifulSoup as bs
import requests
from pprint import pprint

html = requests.get("https://search.naver.com/search.naver?sm=tab_hty.top&where=nexearch&query=%EB%A7%A4%ED%83%843%EB%8F%99+%EB%82%A0%EC%94%A8&oquery=%EB%A7%A4%ED%83%84%EB%8F%99+%EB%82%A0%EC%94%A8&tqi=UeykXwp0Jy0ssgEfNtCssssstzl-120205")
# pprint(html.text)
soup = bs(html.text, 'html.parser')
# pprint(soup)

data1 = soup.find('div', {'class': 'detail_box'})
# pprint(data1)

data2 = data1.findAll('dd')
# pprint(data2[2])

find_dust = data2[0].find('span', {'class':'num'}).text
# pprint(find_dust)

# 보기 좋게 내가 만듬 
for i in range(3):
    find_dust = data2[i].find('span', {'class':'num'}).text
    dust_text = data2[i].text
    dust_condition = dust_text[-2] + dust_text[-1]
    if i==0:
        print('미세먼지: '  + dust_condition + "(" + find_dust + ")")
    elif i==1:
        print("초미세먼지: " + dust_condition +"(" + find_dust + ")")
    else:
        print("오존지수: " + dust_condition +"(" + find_dust + ")")
```

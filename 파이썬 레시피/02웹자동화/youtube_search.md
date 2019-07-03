```python
from selenium import webdriver
import time
from selenium.webdriver.common.keys import Keys

# 폴더에 chromedriver.exe가 있어야함
driver = webdriver.Chrome("chromedriver")
driver.get("https://www.youtube.com/")

search = driver.find_element_by_xpath('//*[@id="search"]')

search.send_keys('반원 코딩')
search.send_keys(Keys.ENTER)
```

### 신기방기...

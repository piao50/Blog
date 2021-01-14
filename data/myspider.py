import scrapy

class BlogSpider(scrapy.Spider):
    name = 'Blog'
    start_urls = ['https://blog.scrapinghub.com']
    start_urls = ['https://www.baidu.com']
    start_urls = ['https://news.baidu.com']
    
    def parse(self, response):
        for title in response.css('.post-header>h2'):
            yield {'title': title.css('a::text').get()}

        for next_page in response.css('a.next-posts-link'):
            yield response.follow(next_page, self.parse)


        for m in response.xpath('*[@id="s-top-left"]/a[1]'):
            print('href:', m)

        content = response.xpath('/html/head/title/text()')
        content = response.xpath('//div')
        content = response.xpath('/html/body/div[1]/div[1]/div[1]/div[2]/a/@href')
        content = response.xpath('/html/body/div[2]/div[2]/div[2]/div/ul/li[2]')
        content = response.xpath('//*[@id="channel-all"]/div/ul/li/a/@href')
        print('len:', len(content))
        cnt = 0
        for c in content:
            print(c.extract())
            #yield {'url': c.extract()}
            url = self.start_urls[0] + c.extract()
            print(url)
            yield {'url:': url}
            cnt = cnt + 1
            if (cnt > 100) :
                break
            yield response.follow(self.start_urls[0] + c.extract(), self.parse_s)
            
#                 
        print('parse invoked')

    def parse_s(self, response):
        print('parse_s')
        print(response.xpath('/html/head/title').extract())
        pass

    

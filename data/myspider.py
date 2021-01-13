import scrapy

class BlogSpider(scrapy.Spider):
    name = 'Blog'
    start_urls = ['https://blog.scrapinghub.com']
    start_urls = ['https://www.baidu.com']
    
    def parse(self, response):
        for title in response.css('.post-header>h2'):
            yield {'title': title.css('a::text').get()}

        for next_page in response.css('a.next-posts-link'):
            yield response.follow(next_page, self.parse)


# //*[@id="s-top-left"]/a[1]            
        for m in response.xpath('*[@id="s-top-left"]/a[1]'):
            print('href:', m)

        content = response.xpath('/html/head/title/text()')
        content = response.xpath('//div')
        content = response.xpath('/html/body/div[1]/div[1]/div[1]/div[2]/a/@href')
        print('len:', len(content))
        for c in content:
            print(c.extract())
            yield {'title': c.extract()}
#        print(content.extract())
            
        print('parse invoked')

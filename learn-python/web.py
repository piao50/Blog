#!/usr/bin/env python


import tornado.ioloop
import tornado.web

class MainHandler(tornado.web.RequestHandler):
    def get(self):
        from datetime import datetime, date, time
        info = datetime.now()
        info = str(info)
        self.write('Hello, gushi!' + '</br>' + info)

application = tornado.web.Application([
    (r'^/index/$', MainHandler)
    ])

if __name__ == '__main__':
    application.listen(9999)
    tornado.ioloop.IOLoop.instance().start()

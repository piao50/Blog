#!/usr/bin/env node
console.log('hello, gushi!');

var http = require('http');

http.createServer(function (request, response){

    response.writeHead(200, {'Content-Type': 'text/html'});
    var cnt = 10; while(cnt-->0) response.write(cnt + ' ');
    response.write('<br>' + new Date().toString() + '</br>');
    response.end('<h1>Hello, NodeJs</h1>');
    
}).listen(9999);

console.log('bye, gushi');

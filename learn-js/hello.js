#!/usr/bin/env node
console.log('hello, gushi');

function f(a, b) { return a * b; }

var x, y;
x = 1;
y = 5;
z = ( x + y ) * 2;

function createImage(name){
    return new Image(name);
}

/*
var http = require('http'); 
http.createServer(function (req, res) { 
  res.writeHead(200, {'Content-Type': 'text/plain'}); 
  res.end('Hello World\n'); 
}).listen(9999, "0.0.0.0"); 
console.log('Server running at http://127.0.0.1:8001/'); 
*/

const http = require('http');


(async () => {
    var cnt = 5; while(cnt-- > 0)
    console.log('gushi is here!' + cnt);
})()

console.log('bye, gushi');

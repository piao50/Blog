console.log(Date());

function hello()
{
    var cnt = 10; while(cnt-->0)
    console.log('hello');
}

function hello1(p1)
{
    console.log('hello ' + p1);
}

function times(a,b) { return a * b; }

hello();
hello1(1);
hello1(times(5,8));


// string is here
var x = "Bill Gates";
console.log(x);
console.log(x.length);

var y = "Hello, Gu Shi";
var pos = y.indexOf("Gu");
console.log(pos);
var pos1 = y.search("Gu");
console.log(pos1);
console.log(y.substr(pos, 6));
y = y.concat(" from China");
console.log(y);

{
    let x = 101;
    console.log(x);
}
console.log(x);

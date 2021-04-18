var x;
x = 0;

console.log(x);

console.log('hello, gushi');
eval("function f() { return x+1; }");

var o = [1,2,3];
console.log(o);
delete o[2];
console.log(o, o.length);
for(var p in o) console.log(o[p]);


try {
    console.log('ok');
}
catch(e){
    console.log('err');
}
finally{
    console.log('bye');
}

// with, debugger, strict


console.log('bye, gushi!');

#!/usr/bin/node
const num = Math.floor(Number(process.argv[2]));
const answ = isNaN(num) ? 'Not a number' : 'My number: ' + num;
console.log(answ);

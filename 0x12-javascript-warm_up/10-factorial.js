#!/usr/bin/node
'use strict';
const arg = Number(process.argv[2]);
function factorial (arg) {
  if (arg === 0 || isNaN(arg)) {
    return 1;
  }
  return arg * factorial(arg - 1);
}
console.log(factorial(arg));

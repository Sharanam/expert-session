// 'use strict'

x = 12.23

console.log(x) // 12.23
// var example
function varExample() {
    if (true) {
        var x = 10;
    }
    console.log(x); // 10
}
varExample();

// let example
function letExample() {
    if (true) {
        let y = 20;
    }
    try {
        console.log(y); // ReferenceError: y is not defined
    } catch (e) {
        console.log(e.message);
    }
}
letExample();

// const example
function constExample() {
    const z = 30;
    try {
        z = 40; // TypeError: Assignment to constant variable.
    } catch (e) {
        console.log(e.message);
    }
    console.log(z); // 30
}
constExample();

function loopUsingVar() {
    for (var i = 0; i < 5; i++) {
        console.log(i);
    }
    console.log(i); // 5
}

function slowLoopUsingVar() {
    for (var i = 0; i < 5; i++) {

        // what is setTimeout? https://developer.mozilla.org/en-US/docs/Web/API/WindowOrWorkerGlobalScope/setTimeout
        setTimeout(() => {
            console.log(i);
        }, 1000);
    }
    console.log(i); // 5
}
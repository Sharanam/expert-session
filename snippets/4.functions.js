// functions in JS:

// 1. Function Declaration
function greet() {
    console.log("Hello, World!");
}
greet(); // Hello, World!

// =====================================================














// 2. First-Class Function
const greet = function() {
    console.log("Hello, World!");
};
greet(); // Hello, World!

// =====================================================














// 3. Arrow Function
const greet = () => {
    console.log("Hello, World!");
};
greet(); // Hello, World!

// =====================================================















// 4. Function Constructor
const greet = new Function('console.log("Hello, World!")');
greet(); // Hello, World!

// =====================================================














// 5. Named Function Expression
const greet = function greet() {
    console.log("Hello, World!");
};
greet(); // Hello, World!

// =====================================================














// 6. Immediately Invoked Function Expression (IIFE)
(function() {
    console.log("Hello, World!");
})(); // Hello, World!

// =====================================================














// 7. Generator Function
function* greet() {
    yield "Hello";
    yield "World";
}
const iterator = greet();
console.log(iterator.next().value); // Hello

// =====================================================














// 8. Async Function
async function greet() {
    return "Hello, World!";
}
greet().then(console.log); // Hello, World!

// =====================================================














// 9. Nested Function
function outer() {
    function inner() {
        console.log("Hello, World!");
    }
    inner();
}
outer(); // Hello, World!

// =====================================================














// 10. Recursive Function
function factorial(n) {
    if (n === 0) {
        return 1;
    }
    return n * factorial(n - 1);
}
console.log(factorial(5)); // 120

// =====================================================














// 11. Callback Function
function greet(callback) {
    callback();
}
greet(function() {
    console.log("Hello, World!");
}); // Hello, World!

// =====================================================














// 12. Higher-Order Function
function greet() {
    return function() {
        console.log("Hello, World!");
    };
}
greet()(); // Hello, World!
// This is also known as a closure.
// =====================================================














// 13. Pure Function
// Because it does not modify the global variable.
function sum(a, b) {
    return a + b;
}
console.log(sum(5, 10)); // 15

// =====================================================














// 14. Impure Function
// Because it modifies the global variable.
let result = 0;

function sum(a, b) {
    result = a + b;
}
sum(5, 10);
console.log(result); // 15

// =====================================================
// 15. Default Parameters













function greet(name = "World") {
    console.log(`Hello, ${name}!`);
}
greet(); // Hello, World!
greet("John"); // Hello, John!

// =====================================================














// 16. Rest Parameters
function sum(...args) {
    let result = 0;

    for (let arg of args) {
        result += arg;
    }

    return result;
}
console.log(sum(1, 2, 3, 4, 5)); // 15

// =====================================================














// 17. Spread Operator
const numbers = [1, 2, 3, 4, 5];
console.log(sum(...numbers)); // 15
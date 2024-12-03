// Arithmetic Operators
let a = 10;
let b = 5;

let sum = a + b;        // Addition: 15
let difference = a - b; // Subtraction: 5
let product = a * b;    // Multiplication: 50
let quotient = a / b;   // Division: 2
let remainder = a % b;  // Modulus: 0
let exponent = a ** b;  // Exponentiation: 100000

// Assignment Operators
let x = 10;  // Assigns 10 to x
x += 5;      // Equivalent to x = x + 5; x is now 15
x -= 3;      // Equivalent to x = x - 3; x is now 12
x *= 2;      // Equivalent to x = x * 2; x is now 24
x /= 4;      // Equivalent to x = x / 4; x is now 6
x %= 3;      // Equivalent to x = x % 3; x is now 0

// Increment and Decrement Operators
let y = 5;
y++; // Increment y by 1: y is now 6
y--; // Decrement y by 1: y is now 5

// Comparison Operators
console.log(a == b);   // Equal to: false
console.log(a != b);   // Not equal to: true
console.log(a > b);    // Greater than: true
console.log(a < b);    // Less than: false
console.log(a >= b);   // Greater than or equal to: true
console.log(a <= b);   // Less than or equal to: false

// Logical Operators
let p = true;
let q = false;

console.log(p && q);   // Logical AND: false
console.log(p || q);   // Logical OR: true
console.log(!p);       // Logical NOT: false

// String Concatenation
let firstName = "John";
let lastName = "Doe";
let fullName = firstName + " " + lastName; // John Doe
fullName = `${firstName} ${lastName}`;     // John Doe
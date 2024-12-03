// overriding default values
const name = userName || "Guest"; // Default to "Guest" if userName is falsy



// destructuring
const { firstName, lastName } = user;
const [first, second] = array;

//SWAP VALUES
let a = 1;
let b = 2;
[a, b] = [b, a];

// optional chaining
const city = user.address?.city;

// spread operator
const parts = ["shoulders", "knees"];
const lyrics = ["head", ...parts, "and", "toes"];


// Immediately Invoked Function Expression (IIFE)
(function () {
  console.log("Hello from IIFE!");
})(); 
// example use case: 
// - to create a new scope
// - to avoid polluting the global scope
// - to avoid naming conflicts
// - to encapsulate code
// - to create a closure
// - to create a private scope

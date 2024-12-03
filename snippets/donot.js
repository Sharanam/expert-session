//Don't ever use this:

// 1. eval is evil
eval('var x = 12.23; console.log("executing from eval " + x)') // 12.23

const userSays = "x = 232"
eval(userSays)
console.log(x) // 232







// 2. with is evil
with({ y: 12.23 }) {
    console.log(y) // 12.23
}







// 3. delete is evil
var x = 12.23
delete x
console.log(x) // 12.23







// 4. void is evil
var x = 12.23
void x
console.log(x) // 12.23







// 5. this is evil
var x = 12.23
this.x = 45.67
console.log(x) // 45.67
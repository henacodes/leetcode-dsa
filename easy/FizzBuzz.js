/**
 * @param {number} n
 * @return {string[]}
 */
var fizzBuzz = function (n) {
  let answer = [];
  for (let i = 1; i <= n; i++) {
    let divisibleByFive = i % 5 == 0;
    let divisibleByThree = i % 3 == 0;
    if (divisibleByFive && divisibleByThree) {
      answer.push("FizzBuzz");
    } else if (divisibleByFive && !divisibleByThree) {
      answer.push("Buzz");
    } else if (divisibleByThree) {
      answer.push("Fizz");
    } else {
      answer.push(`${i}`);
    }
  }

  return answer;
};

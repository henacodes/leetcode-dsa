/**
 * @param {number} num
 * @return {number}
 */
var numberOfSteps = function (num) {
  let currentNumber = num;
  let steps = 0;

  while (currentNumber > 0) {
    if (currentNumber % 2 == 0) {
      currentNumber = currentNumber / 2;
    } else {
      currentNumber = currentNumber - 1;
    }
    steps += 1;
  }

  return steps;
};

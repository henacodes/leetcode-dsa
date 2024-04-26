/**
 * @param {number[]} nums
 * @return {number[]}
 */
var runningSum = function (nums) {
  let array = nums;
  let sum = [];
  array.map((number, index) => {
    let currentSum = sum[index - 1];
    if (currentSum) {
      sum.push(currentSum + number);
    } else {
      sum.push(number);
      console.log(sum);
    }
  });

  return sum;
};

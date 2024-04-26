/**
 * @param {number[][]} accounts
 * @return {number}
 */
var maximumWealth = function (accounts) {
  let lastMaxWealth = 0;
  accounts.map((banks, index) => {
    let totalWealth = banks.reduce((accumulator, currentValue) => {
      return accumulator + currentValue;
    }, 0);

    lastMaxWealth = lastMaxWealth > totalWealth ? lastMaxWealth : totalWealth;
  });

  return lastMaxWealth;
};

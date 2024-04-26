/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */

var middleNode = function (head) {
  let counter = 0;
  let continueLoop = true;
  let newList = head;

  while (continueLoop) {
    if (!newList.next) {
      continueLoop = false;
    } else {
      newList = newList.next;
    }
    counter++;
  }

  let sliceIndex =
    counter % 2 == 0 ? counter / 2 - 1 : Math.ceil(counter / 2) - 2;

  continueLoop = true;
  let newCounter = 0;
  let answer;
  print = console.log;
  newList = head;
  while (continueLoop) {
    if (!newList.next) {
      answer = newList;
      continueLoop = false;
    }
    if (newCounter == sliceIndex) {
      answer = newList.next;
      continueLoop = false;
    } else {
      newCounter += 1;
      newList = newList.next;
    }
  }

  return answer;
};

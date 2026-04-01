
struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* head = new ListNode(0);
        ListNode* currentWorkingNode = head;
        ListNode* currentNodeOne = l1;
        ListNode* currentNodeTwo = l2;

        bool remainderExists = false;

        auto calc = [&]() {
            if (currentWorkingNode != nullptr) {
                int sum = 0;

                if (currentNodeOne != nullptr) {
                    sum += currentNodeOne->val;
                }
                if (currentNodeTwo != nullptr) {
                    sum += currentNodeTwo->val;
                }

                if (remainderExists) {
                    sum += 1;
                }

                if (sum > 9) {
                    currentWorkingNode->val = sum - 10;
                    remainderExists = true;
                } else {
                    currentWorkingNode->val = sum;
                    remainderExists = false;
                }
            }
        };

        while (currentNodeOne != nullptr || currentNodeTwo != nullptr) {
            calc();
            if ((currentNodeOne != nullptr &&
                 currentNodeOne->next != nullptr) ||
                (currentNodeTwo != nullptr &&
                 currentNodeTwo->next != nullptr)) {
                currentWorkingNode->next = new ListNode(0);
                currentWorkingNode = currentWorkingNode->next;
            }

            if (currentNodeOne != nullptr) {
                currentNodeOne = currentNodeOne->next;
            }
            if (currentNodeTwo != nullptr) {
                currentNodeTwo = currentNodeTwo->next;
            }

        }

        if (remainderExists) {
            currentWorkingNode -> next = new ListNode(1);
        }

        return head;
    }
};

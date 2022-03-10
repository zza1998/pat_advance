#include "iostream"

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode *reverseList(ListNode *head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    ListNode *cur = head;
    ListNode *pre = nullptr;
    while (cur != nullptr) {
        ListNode *tmp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = tmp;
    }
    return pre;
}

class Solution {
public:
    ListNode *reverseList(ListNode *head) {
        ListNode *p;
        for (p = NULL; head; swap(head, p))
            swap(p, head->next);
        return p;
    }
};

int main() {
    ListNode n1 = ListNode(1);
    ListNode n2 = ListNode(3);
    n1.next = &n2;
    reverseList(&n1);
}
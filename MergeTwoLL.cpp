#include <iostream>
using namespace std;

// Node structure for linked list
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to insert node at end
void insertEnd(ListNode*& head, int val) {
    ListNode* newNode = new ListNode(val);
    if (!head) {
        head = newNode;
        return;
    }
    ListNode* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

// Function to print list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Merge two sorted linked lists
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode dummy(-1);
    ListNode* temp = &dummy;

    while (list1 && list2) {
        if (list1->val <= list2->val) {
            temp->next = list1;
            list1 = list1->next;
        } else {
            temp->next = list2;
            list2 = list2->next;
        }
        temp = temp->next;
    }

    // Append the remaining nodes
    if (list1) temp->next = list1;
    else temp->next = list2;

    return dummy.next;
}

int main() {
    ListNode* list1 = nullptr;
    ListNode* list2 = nullptr;

    // Example input
    insertEnd(list1, 1);
    insertEnd(list1, 3);
    insertEnd(list1, 5);

    insertEnd(list2, 2);
    insertEnd(list2, 4);
    insertEnd(list2, 6);

    cout << "List 1: ";
    printList(list1);
    cout << "List 2: ";
    printList(list2);

    ListNode* merged = mergeTwoLists(list1, list2);

    cout << "Merged List: ";
    printList(merged);

    return 0;
}

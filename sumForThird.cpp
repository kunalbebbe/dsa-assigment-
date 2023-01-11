#include <iostream>
using namespace std;

struct Node {
    int val;
    Node *next;
};

Node *newNode(int val) {
    Node *temp = new Node;
    temp->val = val;
    temp->next = NULL;
    return temp;
}

void printList(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->val;
        if(temp->next != NULL) cout<<"->";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *n) {
    int length = 0;
    while (n != NULL) {
        n = n->next;
        length++;
    }
    return length;
}

Node* addLists(Node* first, Node* second)
{
    int carry = 0;
    Node *res = NULL, *temp, *prev = NULL;
    int len1 = getLength(first);
    int len2 = getLength(second);
    if (len1 < len2)
    {
        swap(first, second);
        swap(len1, len2);
    }

    int diff = len1 - len2;
    for (int i = 0; i < diff; i++)
    {
        temp = newNode(first->val);
        temp->next = NULL;

        if (res == NULL) {
            res = temp;
        } else {
            prev->next = temp;
        }
        prev = temp;

        first = first->next;
    }

    while (first != NULL)
    {
        int sum = carry + first->val + second->val;
        carry = sum / 10;
        sum = sum % 10;

        temp = newNode(sum);
        temp->next = NULL;
        if (res == NULL) {
            res = temp;
        } else {
            prev->next = temp;
        }
        prev = temp;

        first = first->next;
        second = second->next;
    }

    if (carry > 0) {
        temp->next = newNode(carry);
    }
    return res;
}

int main() {
    // 7 -> 1 -> 5
    Node *first = newNode(7);
    first->next = newNode(1);
    first->next->next = newNode(5);
    printList(first);
    //  5 -> 9 -> 2
    Node *second = newNode(5);
    second->next = newNode(9);
    second->next->next = newNode(2);
    printList(second);
    //  sum of first and second list
    Node *third = addLists(first, second);
    printList(third); // should output "2 -> 1 -> 8"

    return 0;
}

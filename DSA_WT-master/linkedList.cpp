#include <iostream>

using namespace std;

struct linkedList
{
    int a;
    linkedList *next;
} *head;

void segregateEvenOdds(linkedList *head)
{
    linkedList *oddIdx = head;
}

void enterPress()
{
    cout << "\n\nPress Enter to continue...";
    cin.get();
    while (cin.get() != '\n')
        ;

    cout << "\e[1;1H\e[2J"; // regex expression to clear screen
}

void createList()
{
    linkedList *currentList = head;

    cout << "\n\n";
    while (true)
    {
        char ch;
        cout << "Enter a value: ";
        cin >> currentList->a;

        cout << "Do you want to add more values?(y/n): ";
        cin >> ch;

        if (ch == 'y')
        {
            currentList->next = new linkedList;
            currentList = currentList->next;
            continue;
        }

        currentList->next = NULL;
        break;
    }

    enterPress();
}

void deleteNode()
{
    linkedList *prevList = head, *currentList = prevList->next;
    int val;
    cout << "\n\nEnter the value to delete: ";
    cin >> val;

    while (currentList)
    {
        if (currentList->a == val)
        {
            prevList->next = currentList->next;
            delete currentList;
            break;
        }

        prevList = currentList;
        currentList = currentList->next;
    }

    enterPress();
}

void displayList()
{
    cout << "\n\n";
    for (linkedList *list = head; list != NULL; list = list->next)
        cout << list->a << " ";

    enterPress();
}

void insertNode()
{
    linkedList *newNode = new linkedList, *currentNode = head;
    int pos;

    cout << "\n\nEnter the position to insert value at: ";
    cin >> pos;

    if (pos == 1)
    {
        newNode->next = head;
        head = newNode;
    }

    else
    {
        pos -= 2;
        while (pos--)
        {
            currentNode = currentNode->next;
        }

        newNode->next = currentNode->next;
        currentNode->next = newNode;
    }

    cout << "Enter the value: ";
    cin >> newNode->a;

    enterPress();
}

int main()
{
    head = new linkedList;
    linkedList *currentList = head;

    int ch;
    do
    {
        cout << "\n1.Create a list.\n2.Delete an item from the list.\n3.Insert an item in the list.\n4.Display the list.\n5.Exit\nEnter choice(1-5): ";
        cin >> ch;
        if (ch == 1)
            createList();
        else if (ch == 2)
            deleteNode();
        else if (ch == 3)
            insertNode();
        else if (ch == 4)
            displayList();
        else if (ch == 5)
            exit(0);

        else
        {
            cout << "\nWrong choice entered.";
            continue;
        }
    } while (ch != 5);
}
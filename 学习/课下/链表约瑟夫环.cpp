#include <iostream>
using namespace std;
typedef struct Node
{
    int id;
    Node *next;
} Node;

int main()
{
    int n;
    int k;
    cin >> n;
    cin >> k;
    Node *head = new Node;
    head->id = 1;
    head->next = nullptr;

    Node *tail = head;
    for (int i = 2; i <= n; i++)
    {
        Node *newNode = new Node;
        newNode->id = i;
        newNode->next = nullptr;
        tail->next = newNode;
        tail = newNode;
    }
    tail->next = head;
    Node *current = head;
    Node *previous = nullptr;
    while (n > 1)
    {
        for (int i = 0; i < k - 1; ++i)
        {
            previous = current;
            current = current->next;
        }
        Node *temp = current;
        cout << temp->id << " ";
        if (temp == head)
            head = head->next;
        previous->next = temp->next;
        delete temp;
        n--;
        current = previous->next;
    }
    cout << current->id << endl;
    delete current;
    return 0;
}
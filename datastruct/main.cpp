#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;
    Node* previous;
};

void printForward(Node *head) {
    Node* traverser = head;
    while (traverser != nullptr) {
        cout << traverser->value<<endl;
        traverser = traverser->next;
    }
}
void printBackwards(Node* tail) {
    Node* traverser = tail;
    while (traverser != nullptr) {
        cout << traverser->value<<endl;
        traverser = traverser->next;
    }
}

int main() {
    Node* head;
    Node* tail;

    Node* node = new Node();
    node-> value = 4;
    node-> next = nullptr;
    node-> previous = nullptr;
    head=node;
    tail=node;

    node=new Node();
    node-> value = 5;
    node-> next = nullptr;
    node-> previous = tail;
    tail-> next = node;
    tail = node;

    node=new Node();
    node-> value = 6;
    node-> next = nullptr;
    node-> previous = tail;
    tail-> next = node;
    tail = node;

    node=new Node();
    node-> value = 10;
    node-> next = nullptr;
    node-> previous = tail;
    tail-> next = node;
    tail = node;

    printBackwards(tail);

    cin.get();
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.
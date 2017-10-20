#include<iostream>
using namespace std;

struct Node{
        int data;
        Node*next;
};

int main() {
        Node*first = new Node { 1, nullptr };
        Node*second = new Node { 2, nullptr };
        first -> next = second

        Node*second = new Node {2, nullptr };
        Node*first = new Node {1, second };

        Node*first = nullptr;
        Node*second = nullptr;
        int n = 0;
       Node*second = new Node { 2, nullptr };
        first -> next = second

        Node*second = new Node {2, nullptr };
        Node*first = new Node {1, second };

        Node*first = nullptr;
        Node*second = nullptr;
        int n = 0;
        while (cin >> n){
                Node*node = new Node { n, nullptr };
                if (first == nullptr){
                        first = node;
                }
                if (last ! = nullptr)
                        last -> next = node;
                        last = node;
                }
     }

        Node * current=first;
        do{
                cout << current -> data << " ";
                current = current -> next;
        }while (current -> next ! = nullptr);
}


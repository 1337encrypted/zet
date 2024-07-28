# Linked List

1. [Advantages](#Advantages)
1. [Singly linked list](#singly-linked-list) 
1. [Doubly linked list](#doubly-linked-list)
1. [Singly Circular linked list](#singly-circular-linked-list)
1. [Doubly Circular linked list](#doubly-circular-linked-list)

## Advantages
- Linked list is a linear data structure.   
- Linked list is a dynamic data structure.   
- It can be grown and shrunk at run time.   
- Insertion and deletion is easy.   

``` 
    Address
       ⭣
 _________        _________        _________        _________
| 5 | 710 | ---> | 6 | 714 | ---> | 5 | 718 | ---> | 6 | 722 | 
  ⭡   
 data 
```

```
#include<iostream>
using namespace std;

class Node {

public:

    int data;
    Node* next;
    
    Node (int data) {
        this → data = data;
        this →> next = NULL;
    }
};

int main () {
    
    Node* nodel = new Node (10);
    cout < nodel → data < endl; cout < nodel → next << endl;
    return 0;
}
```
## Singly linked list 
## Doubly linked list
## Singly Circular linked list
## Doubly Circular linked list

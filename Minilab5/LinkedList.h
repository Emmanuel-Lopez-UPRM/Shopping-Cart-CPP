#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <fstream>
using namespace linkedlistofclasses;
using namespace std; 
class LinkedList {
public:
    LinkedList();
    ~LinkedList();

    void insertHead(int value);
    void inserTail(int value); 
    bool removeFirst(int value);
    void print(ostream& out) const;
    bool isEmpty() const;
    int size() const;
    void clear();

private:
    NodePtr head;
};

#endif

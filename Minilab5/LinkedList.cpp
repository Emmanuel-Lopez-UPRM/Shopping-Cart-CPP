#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList() {
    clear();
}

void LinkedList::insertHead(int value) {
    NodePtr newNode = new Node(value, head);
    head = newNode;
}
void LinkedList :: inserTail(int value){
     NodePtr newNode = new Node(value, nullptr);
     if (head == nullptr) {
        head = newNode;
        return;
     }
     NodePtr tmp = head; 
     while (tmp->getLink() != nullptr)
     {
        tmp = tmp->getLink();
     }
     tmp->setLink(newNode);
}
bool LinkedList::removeFirst(int value) {
    if (head == nullptr) {
        return false;
    }
    if (head->getData() == value) {
        NodePtr toDelete = head;
        head = head->getLink();
        delete toDelete;
        return true;
    }
    NodePtr prev = head;
    NodePtr current = head->getLink();
    while (current != nullptr)
    {
        if (current->getData() == value){
            prev->setLink(current->getLink());
            delete current; 
            return true;
        }
        prev = current; 
        current = current -> getLink();

    }
    return false;
    
        
 }
    
   
void LinkedList::print(ostream &out) const {
    if (isEmpty()) {
        out << "Lista vacía" << endl;
        return;
    }
    
 
    NodePtr sorted = nullptr;
    NodePtr current = head;
    

    while (current != nullptr) {
        NodePtr newNode = new Node(current->getData(), nullptr);
        
        
 if (sorted == nullptr || newNode->getData() < sorted->getData()) {
            newNode->setLink(sorted);
            sorted = newNode;
    } else {
            
    NodePtr prev = sorted;
     NodePtr pos = sorted->getLink();
            
    while (pos != nullptr && newNode->getData() > pos->getData()) {
        prev = pos;
        pos = pos->getLink();
            }
            
         newNode->setLink(pos);
        prev->setLink(newNode);
    }
        
        current = current->getLink();
}
    
    
    NodePtr tmp = sorted;
    while (tmp != nullptr) {
        out <<tmp->getData() << " ";
        NodePtr toDelete = tmp;
        tmp = tmp->getLink();
        delete toDelete;
    }
}

bool LinkedList::isEmpty() const {
    return head == nullptr;
}

int LinkedList::size() const {
    int count = 0;
    NodePtr tmp = head;
    while (tmp != nullptr) {
        count++;
        tmp = tmp->getLink();
    }
    return count;
}

void LinkedList::clear() {
    NodePtr tmp = head;
    while (tmp != nullptr) {
        NodePtr toDelete = tmp;
        tmp = tmp->getLink();
        delete toDelete;
    }
    head = nullptr;
}

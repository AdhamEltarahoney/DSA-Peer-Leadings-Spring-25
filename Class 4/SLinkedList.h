#ifndef SLINKED_LIST
#define SLINKED_LIST

#include "SNode.h"
#include <iostream>

class SLinkedList {
public:
  SLinkedList();
  ~SLinkedList();
  bool empty() const;
  int front() const;
  void addFront(int e);
  void removeFront();
  void print() const;
  int getSize() const { return nElem; }
  void appendAfter(SLinkedList *L);// next class

private:
  SNode *head;
  int nElem = 0;
};

// Default constructor
SLinkedList::SLinkedList() : head(nullptr) {}

// Returns whether the linked list is empty
bool SLinkedList::empty() const {
  return head == nullptr;
}

// Returns the value of the first node
int SLinkedList::front() const {
  return head->elem;
}

// Removes the first node
void SLinkedList::removeFront() {
  if (head) {
    SNode *old = head;
    head = head->next;
    delete old;
    nElem--;
  }
}

// Destructor
SLinkedList::~SLinkedList() {
  while (!empty()) {
    removeFront();
  }
}

// Adds a new node at the front
void SLinkedList::addFront(int e) {
  SNode *v = new SNode;
  v->elem = e;
  v->next = head;
  head = v;
  nElem++;
}

// Prints the linked list elements
void SLinkedList::print() const {
  SNode *curr = head;
  while (curr) {
    std::cout << curr->elem << " ";
    curr = curr->next;
  }
  std::cout << std::endl;
}

// Appends another linked list at the end
void SLinkedList::appendAfter(SLinkedList *L) {
  if (!head) {
    head = L->head;
  } else {
    SNode *curr = head;
    while (curr->next) {
      curr = curr->next;
    }
    curr->next = L->head;
  }
  nElem += L->getSize();
}

#endif

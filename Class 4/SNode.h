#ifndef SNODE
#define SNODE

class SNode {
public:
  SNode() : elem(0), next(nullptr) {} // Default constructor

private:
  int elem;
  SNode *next;

  friend class SLinkedList; // Grant access to SLinkedList
};

#endif

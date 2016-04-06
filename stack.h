class Node {
public:
  int val;
  Node *next;
};

class Stack {
public:
  Node *top;

  Stack();
  void push(int val);
  void pop();
  void traverse();
};

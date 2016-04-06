#include <iostream>

class Node {
public:
  int val;
  Node *next;
};

class Stack {
public:
  Node *top;

  Stack() {
    top = nullptr;
  }

  void push(int val) {
    if (top == nullptr) {
       top = new Node();
       top->val = val;
       top->next = nullptr;
       std::cout << "First element (" << top->val << ", " << top->next << ")" << std::endl;
    }
    else {
       Node *newTop = new Node();
       newTop->val = val;
       newTop->next = top;
       top = newTop;
       std::cout << "Next  element (" << top->val << ", " << top->next << ")" << std::endl;
    }
  }

  void pop() {
    Node *temp = top;
    if (temp == nullptr) {
      std::cout << "Nothing to pop" << std::endl;
      return;
    }
    else {
      std::cout << "Popped: " << top->val << std::endl;
      top = top->next;
      delete temp;
    }
  }

  void traverse() {
    Node *temp;
    if (top == nullptr) {
      std::cout << "Nothing to traverse" << std::endl;
    }
    else {
      temp = top;
      while (temp->next != nullptr) {
        std::cout << temp->val << std::endl;
        temp = temp->next;
      }
      std::cout << temp->val << std::endl;
    }
  }
};



int main() {
  Stack s;
  s.traverse();
  s.push(1);
  s.push(2);
  s.push(3);
  s.traverse();
  s.pop();
  s.traverse();
  return 0;
}

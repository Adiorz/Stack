#include <iostream>
#include "stack.h"

Stack::Stack() {
  top = nullptr;
}
void Stack::push(int val) {
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

void Stack::pop() {
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

void Stack::traverse() {
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

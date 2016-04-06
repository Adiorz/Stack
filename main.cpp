#include <iostream>
#include "stack.h"

int main() {
  std::cout << "Main" << std::endl;
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

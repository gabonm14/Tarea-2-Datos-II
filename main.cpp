//
// Created by gabonm7 on 17/09/24.
//

#include <iostream>
#include "LinkedList.h"

int main() {
  LinkedList list;
  list.append(5);
  list.append(15);
  list.append(10);

  list.deleteNode(1);
  list.deleteNode(1);

  return 0;
}
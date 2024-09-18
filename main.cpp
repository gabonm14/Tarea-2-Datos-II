//
// Created by gabonm7 on 17/09/24.
//

#include <iostream>
#include "LinkedList.h"
#include "BinaryTree.h"

int main() {
  LinkedList list;
  list.append(5);
  list.append(15);
  list.append(10);

  list.deleteNode(1);
  list.deleteNode(1);

  BinaryTree tree;
  tree.insert(5);
  tree.insert(10);
  tree.insert(15);
  tree.insert(20);
  tree.insert(25);
  tree.insert(30);
  tree.insert(35);
  tree.insert(3);
  return 0;
}
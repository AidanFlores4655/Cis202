/*
File: main.cpp
Description: creates a tree and stores name data in nodes to print the size of the tree and data stored in it.
Mon. June 5, 2023
Aidan Flores
aidanf4655@student.vvc.edu
*/
#include <iostream>
#include <string>
#include "tree.h"
using namespace std;

int main(){
   Tree t1("Anne");
   Tree t2("Peter");
   t1.add_subtree(t2);
   Tree t3("Zara");
   t1.add_subtree(t3);
   Tree t4("Savannah");
   t2.add_subtree(t4);
   std::cout << "Size: " << t1.size() << std::endl;

   t1.print();   // this will recursively print the tree.

   return 0;
}
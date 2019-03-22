#include <iostream>
#include "Node.h"


int main() {
    Node<int> node(115);
    Node<int> second(27);
    node.setNext(&second);
    std::cout << node.getNext()->getValue() << std::endl;
    return 0;
}
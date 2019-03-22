//
// Created by brian on 3/21/19.
//

#ifndef CI_LINKED_NODE_H
#define CI_LINKED_NODE_H


template <class T>
class Node {
public:
    Node(T first) {
        value = first;
    }

    T getValue() {
        return value;
    }

    void setNext(Node* nodeptr) {
        this->next = nodeptr;
    }

    Node* getNext() {
        return this->next;
    }

private:
    T value;
    Node* next;
};




#endif //CI_LINKED_NODE_H

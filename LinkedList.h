//
// Created by Isaac Hamm on 2/19/22.
//

#ifndef LAB6_LINKEDLIST_H
#define LAB6_LINKEDLIST_H
#include "LinkedListInterface.h"

using namespace std;

template<typename T>
class LinkedList : public LinkedListInterface<>
{
private:

    int nodeNumber;

public:

LinkedList(){};
~LinkedList(){};
void insertHead(T value) {};
void insertTail(T value) {};
void insertAfter(T value, T insertionNode) {};
void remove(T value) {};
void clear() {};
T at(int index) {};
int size() {return nodeNumber};
string toString() {};

};


#endif //LAB6_LINKEDLIST_H

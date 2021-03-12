//
// Created by Chris on 8/3/2021.
//

#ifndef TAREAEXTRACLASE1_NODE_H
#define TAREAEXTRACLASE1_NODE_H
#include<iostream>
#include<stdlib.h>
using namespace std;

class Node {
private:

    typedef struct node{
        int data;
        node* next;
    }* nodePtr;

    nodePtr head;
    nodePtr current;
    nodePtr temporary;
public:
    Node();
    void AddNode(int add);
    void DelNode(int del);
    void PrintList();


};

#endif //TAREAEXTRACLASE1_NODE_H

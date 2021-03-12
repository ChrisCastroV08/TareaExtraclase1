//
// Created by Chris on 8/3/2021.
//

#ifndef TAREAEXTRACLASE1_LIST_H
#define TAREAEXTRACLASE1_LIST_H


class List {
private:

    typedef struct node{
        int data;
        node* next;

    }* nodePtr;

    nodePtr head;
    nodePtr current;
    nodePtr temporary;
public:
    List();
    void PrintList();
};


#endif //TAREAEXTRACLASE1_LIST_H

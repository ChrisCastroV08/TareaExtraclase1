//
// Created by Chris on 8/3/2021.
//

#include "Node.h"
#include <cstdlib>
#include <iostream>
#include "List.h"
#include "Collector.h"

using namespace std;

Node::Node() {
    head = nullptr;
    current = nullptr;
    temporary = nullptr;
}

void Node::AddNode(int add) {
    nodePtr n = new node;
    n->next = NULL;
    n->data = add;

    if (head != NULL){
        current = head;
        while (current->next != NULL){
            current = current->next;
        }
        current->next = n;
    }
    else{
        head = n;
    }
}
void Node::DelNode(int del) {
    nodePtr delNode = NULL;
    temporary = head;
    current = head;
    while (current != NULL && current->data != del){
        temporary = current;
        current = current->next;
    }
    if (current == NULL){
        cout << del << " no fue encontrado en la lista"<< endl;
        delete delNode;
    }
    else{
        delNode = current;
        current = current->next;
        temporary->next = current;
        if (delNode == head){
            head = head->next;
            temporary = NULL;
        }
        cout << del << " fue borrado de la lista"<< endl;
        delete delNode;

    }
}
void Node::PrintList() {
    current = head;
    while (current != NULL){
        cout << current->data << endl;
        current = current->next;
    }
}

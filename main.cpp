//
// Created by Chris on 8/3/2021.
//

#include <cstdlib>
#include "List.h"
#include "Collector.h"
#include "Node.h"
using namespace std;

int main(int argc, char** argv) {

    Node ListaNodos;

    ListaNodos.AddNode(3);
    ListaNodos.AddNode(5);
    ListaNodos.PrintList();
    ListaNodos.DelNode(5);
    ListaNodos.PrintList();


    return 0;
}
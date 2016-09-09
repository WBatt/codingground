#ifndef READY_QUEUE_H
#define READY_QUEUE_H   

#include <iostream>
#include "PCB.h"

using namespace std;

class readyQueue{
    private:
        PCB *table;
    public:
        readyQueue();
        ~readyQueue();
        void addToReadyQueue(PCB &p);
        void removeFromReadyQueue(PCB &p);
        void displayReadyQueue();
        PCB getPCB();
};

#endif
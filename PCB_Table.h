#ifndef PCB_TABLE_H
#define PCB_TABLE_H

#include <iostream>
#include "PCB.h"

using namespace std;

class PCB_Table{
    private:
        PCB *table;
    public:
        PCB_Table();
        ~PCB_Table();
        void addPCB(PCB &p);
        PCB getPCB(int p);
        void displayTable();

};

#endif
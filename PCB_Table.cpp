#include "PCB_Table.h"

PCB_Table::PCB_Table(){
    table = new PCB[21];
}
PCB_Table::~PCB_Table(){

}

void PCB_Table::addPCB(PCB &p){
    table[p.getID()] = p;
}

PCB PCB_Table::getPCB(int p){
    return table[p];
}

void PCB_Table::displayTable(){
    for(int i=1; i<=20; i++){
        cout << table[i].getID() << endl;
    }
}
#include <iostream>
#include "PCB.h"

PCB::PCB(int i){
    id = i;
    state = 0;
}

PCB::PCB(){}

PCB::~PCB(){}

void PCB::setState(int s){
    state = s;
}

int PCB::getState(){
    return state;
}

int PCB::getID(){
    return id;
}

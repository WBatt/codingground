#include <iostream>
#include "PCB.h"
#include "PCB_Table.h"
#include "readyQueue.h"

using namespace std;

//functions
void createTable();
void displayTable();
void addToReadyQueue(PCB &p);

//Variables
PCB process;
PCB_Table table;
readyQueue q1;


int main() {
        

        //create Process control block PCB table
        //create 20 (1-20) PCB and put them in the table
        //create a ReadyQueue q1

        //a) add processes 5, 1, 8, 11 to q1 and change state to READY
        // display q1
        //b) remove the process with the highest priority from q1
        // change state to RUNNING
        // dispaly q1
        //c) remove the process with the highest priority from q1
        // change state to RUNNING
        // dispaly q1
        //d) insert processes 3,7,2,12,9 to q1
        //e) remove, change state, then display until done.

    createTable();
    addToReadyQueue(table.getPCB(5));
    displayTable();
 

    
	return 0;
}



void createTable(){
    for(int i=1; i<=20; i++){
        process = PCB(i);
        table.addPCB(process);
    }
}

void addToReadyQueue(PCB &p){
        
}

void displayTable(){
        table.displayTable();
}
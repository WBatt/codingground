#ifndef PCB_H
#define PCB_H

class PCB{
    private:
        int id;
        int state;
    public:
        PCB();
        PCB(int i);
        ~PCB();
        void setState(int s);
        int getState();
        int getID();
};


#endif
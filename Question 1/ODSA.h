
#include "DSA.h"
// #include "DSA.cpp"
#ifndef ODSA_H
#define ODSA_H



class ODSA:public DSA{
public:
    ODSA(){};

    void Sort(int arr[], int n);
    void swap(int *p, int *p2);
    void insertion(int, int);
    void searching(int);
    
};


#endif 
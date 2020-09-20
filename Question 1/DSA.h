#include <iostream>
#ifndef DSA_H
#define DSA_H


class DSA{
private:
int *Data;
int size;
public:
DSA(){Data=NULL;
 	size=0;};
DSA(int n);
DSA(const DSA & rhs);
~DSA();
void insertion(int value,int i);
void searching(int value);
unsigned int getSize() const;
int *getData();
void print(int i);
};
#endif
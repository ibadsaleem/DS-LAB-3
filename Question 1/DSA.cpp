#include "DSA.h"
#include<iostream>
#include<fstream>
#include <stdio.h>
#include <string.h>
#include<cstdlib>
#include <iostream>


using namespace std;


//  DSA::DSA(){
//  	Data=NULL;
//  	size=0;
	
//  }
int* DSA::getData()
{
    return Data;
}

DSA::DSA(int n){
	size=n;
	Data=new int [size];
}

DSA::DSA(const DSA & rhs){
this->size= rhs.size;
this->Data= new int[size];
memcpy(this->Data,rhs.Data,(sizeof(int)*rhs.getSize()));
}

unsigned int DSA::getSize() const {
return size;
}


void DSA::insertion(int val,int i)
{
	if (i<0 && i>size)
	{
		cout<<"Array out of Bound";
		exit(0);
	}
	Data[i]=val;
}

void DSA::searching (int value)
{
	for (int i=0;i<size;i++)
	{
		if (Data[i]==value)
		{
			cout<<"Data: "<<Data[i]<<" at "<<"i"; 
		}
	}
}

 DSA::~DSA(){

 if(Data !=0)
 {
 cout<<"bye--"<<endl;
 delete [] Data;
 Data=0;
 size=0; }
 }

 void DSA::print(int i){
	 
	 if (i<0 || i>size)
	 {
		 cout << "Array out of Bounds Exiting";
		 exit(0);
	 }
	 else {
		 cout <<*(Data+i);
	 }
 }


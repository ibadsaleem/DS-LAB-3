#include "ODSA.h"
// #include "DSA.h"
#include <iostream>
// #include "DSA.cpp"


using namespace std;

void ODSA::swap(int *p, int *p2)  
{  
    int temp = *p;  
    *p = *p2;  
    *p2 = temp;  
}

void ODSA::Sort(int arr[], int n)
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
          for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}



void ODSA::insertion(int a,int b)
{
	
    if (b<0 && b>ODSA::getSize())
	{
		cout<<"Array out of Bound";
		exit(0);
	}
    int* arr = ODSA::getData();
    arr[b] = a;
    Sort(arr,b);
    DSA::setData(arr, b);
}

void ODSA::searching(int a)
{
    int* arr = ODSA::getData();
   
    for (int i=0;i<ODSA::getSize();i++)
	{
		if (arr[i]==a)
		{
			cout<<"Data: "<<arr[i]<<" at "<<"i"; 
		}
        else if(ODSA::getData()[i]>a)
        {
            cout << "Not Found";
            exit(0);
        }
    }

}





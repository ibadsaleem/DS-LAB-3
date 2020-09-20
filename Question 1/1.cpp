#include <iostream>
#include "DSA.cpp"
#include "ODSA.cpp"
#include "UDSA.cpp"
// #include "DSA.h"
#include "UDSA.h"
// #include "ODSA.cpp"

int main()
{
	DSA D1(3);
	ODSA OD;
	D1.insertion(1, 0);
	D1.insertion(3, 1);
	D1.insertion(6, 2);
	// D1.print(0);//debug
	D1.searching(3);
	// OD.insertion(123,0);
	// OD.insertion(1,1);
	// // OD.insertion(2,2);
	// // OD.searching(2);
	// OD.print(6);
	// UDSA UD;

	// UD.insertion(1,0);
	// UD.insertion(6, 1);
	// UD.insertion(7, 2);
	// UD.searching(3);
	// UD.print(5);
}

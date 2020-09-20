#include <iostream>
#include "DSA.cpp"
#include "ODSA.cpp"
#include "UDSA.cpp"
// #include "DSA.h"
#include "UDSA.h"
// #include "ODSA.cpp"

int main()
{
	DSA D1(1);
	ODSA OD;

	OD.insertion(1,0);
	OD.insertion(1,1);
	// OD.insertion(2,2);
	// OD.searching(2);
	OD.print(1);
	UDSA UD;

	// UD.insertion(2, 0);
	// UD.insertion(6, 1);
	// UD.insertion(7, 2);
	// UD.searching(3);
	// UD.print(0);
}

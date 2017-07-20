// tablice dynamiczne.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	using namespace ::std;

	int *ptr4 = new int[4];
	ptr4[0] = 234;
	ptr4[1] = 25;
	ptr4[2] = 555;
	ptr4[3] = 641;
	cout << ptr4[1]<<endl;
	cout << ptr4<<endl;
	ptr4++;
	cout << ptr4[1]<<endl;
	cout << ptr4;

		getchar();
    return 0;
}


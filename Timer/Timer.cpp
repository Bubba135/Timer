// Timer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>
//#include "time.h"

using namespace std;

string replay;

int main()
{
	while (true)
	{
		int m;
		int s;

		cout << "Enter m and s" << endl;
		cin >> m >> s;

		Time(m, s);

		cout << "Do you want to contionu? Y/N" << endl;
		cin >> replay;
		if (replay == "n") 
		{
			break;
		}
	}
	system("pause");
}


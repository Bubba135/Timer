#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;




//These m,s are parameters that catch these values when this function is called. 
void Time(int m, int s)
{

	for (int sec = s; s >= 0; s--)
	{
		
		system("cls"); 
		cout << "You have " << "minutes: " << m << " seconds: " << s << endl;
		
		Sleep(1000);

		if (s == 0)
		{
			int total = m * 60;

			for (int min = total; total >= 0; total--)
			{
				system("cls");
				cout << "You have the remaining seconds: " << total << endl;
				
				Sleep(1000);
			}
		}
	}
}
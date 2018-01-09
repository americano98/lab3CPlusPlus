#include "StdAfx.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include "Process.h"

using namespace std;


int main() 
{
	setlocale(LC_ALL, "Russian");
	
	int choose;
	int N = 20;

	cout << "Выберите тип данных, с которым будете работать:" << endl;
	cout << "1 - int" << endl;
	cout << "2 - string" << endl;

	do {
		cin >> choose;
		cout << endl;
	} while (choose != 1 && choose != 2 );
	
	switch (choose) {
		case 1:
		{
			Process <int> p1;
			Deque <int> a1(N);
			p1.Process1(a1); 
		}
			break;
		case 2:
		{
			Deque<string>  a2(N);
			Process<string> p2;
			p2.Process1(a2); 
		}
			break;
	}
	getchar();
	getchar();
	return 0;
	
}
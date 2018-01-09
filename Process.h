#include "StdAfx.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include "Deque.h"

using namespace std;
template <class T>
class Process {
public:
	void Process1(Deque<T>  &dec);

};

template <class T>
void Process<T>::Process1(Deque<T>  &dec) {
	
	int choose = 0;
	do {
		int var = dec.Count() > 0 ? 7 : 2;
		choose = ShowMenu(var);
		switch (choose) {
		case 1:
		{
				T p1;
				dec.Print();
				cout << "Введите значение:" << endl;
				if (cin >> p1) {
					dec.PushBack(p1);
					getchar();
					getchar();
				}
				else
				{
					cout << "Неверный ввод" << endl;
					getchar();
					getchar();
					choose = 0;
				}
			
		}
			break;
		case 2:
		{			
			  T p2;
				cout << "Введите значение:" << endl;
				if (cin >> p2) {
					dec.PushInFront(p2);
					getchar();
					getchar();
				}
				else
				{
					cout << endl;
					cout << "Неверный ввод" << endl;
					getchar();
					getchar();
					choose = 0;
				}

			}
			
		
			break;
		case 3:
		{
			dec.Print(); 
			cout << endl;
			getchar();
			getchar(); 
		}
			break;
		case 4:
		{	
			dec.PopFromBack();
			cout << "Обновленный массив: " << endl;
			dec.Print();
			getchar();
			getchar(); 
		}
			break;
		case 5:
		{
			dec.PopFromFront();
			cout << "Обновленный массив: " << endl;
			dec.Print();
			getchar();
			getchar();
		}
			break;
		case 6:
		{	
			cout << "Последний эл-т: " << dec.GetLast() << endl; 
			cout << endl;
			getchar();
			getchar(); 
		}
			break;
		case 7:
		{
			cout << "Первый эл-т:"  << dec.GetFirst() << endl;
			cout << endl;
			getchar();
			getchar();
		}
			break;
		}
	} while (choose > 0);
}

int ShowMenu(int var) {

	int choose = 0;
	cout << "Операции с массивом:" << endl;
	cout << "1 - добавить в конец" << endl;
	cout << "2 - добавить в начало" << endl;
	if (var > 2)
	{
		cout << "3 - Печать " << endl;
		cout << "4 - удалить эл-т с конца" << endl;
		cout << "5 - удалить эл-т с начала" << endl;
		cout << "6 - получить последний эл-т" << endl;
		cout << "7 - получить первый эл-т" << endl;
	}
	cout << "0 - Выход" << endl;
	do {
		cin >> choose;
		cout << endl;
	} while (choose > var);
	return choose;
}
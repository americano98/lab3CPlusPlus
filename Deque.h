#include "StdAfx.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
template <class T> class Deque
{
private:
	T *dinArr;
	int cnt;
public:
	Deque(int Size);
	~Deque();
	bool IsEmpty();
	int Count();
	void PushBack(T info);    // добавить в конец
	void PushInFront(T info); // добавть в начало
	void PopFromBack();       // удалить с конца
	void PopFromFront();      // удалить с начала
	T GetFirst();          // получить 1 эл-т
	T GetLast();         // получить последний эл-т
	void Print();             // распечатать массив
};



template <class T>
Deque<T>::Deque(int Size)
{
	cout << Size << endl;
    T *dinArr = new T [Size];
	this->dinArr = dinArr;
	cnt = 0;
}

template <class T>
Deque<T>::~Deque() {
	delete [] dinArr;
}

template <class T>
bool Deque<T>::IsEmpty()
{
	return cnt == 0;
}

template <class T>
int Deque<T>::Count()
{
	return cnt;
}

// Добавление в конец массива
template <class T>
void Deque<T>::PushBack(T info)
{

	dinArr[cnt] = info;
	cnt++;
}

// Добавление в начало массива
template <class T>
void Deque<T>::PushInFront(T info)
{
	if (cnt == 0) {
		dinArr[0] = info;
		cnt++;
	}
	else 
	{
		// Сдвиг массива
		for(int i = cnt; i>0; i--)
		{
			dinArr[i] = dinArr[i - 1];
		}
		dinArr[0] = info;
		cnt++;
	}
}

// Удаление последнего эл-та
template <class T>
void Deque<T>::PopFromBack()
{
		cnt--;
}

// Удаление первого эл-та
template <class T>
void Deque<T>::PopFromFront()
{
	if(cnt != 0)
	{
		for(int i = 0; i < cnt - 1; i++)
			dinArr[i] = dinArr[i+1];
		cnt--;
	}
}

// получить последний эл-т
template <class T>
T Deque<T>::GetFirst() {
	return dinArr[0];
}

template <class T>
T Deque<T>::GetLast() {
	return dinArr[cnt-1];
}

template <class T>
void Deque<T>::Print() {
	cout << "Размерность: " << cnt << endl;
	for(int i = 0; i < cnt; i++)
		cout << dinArr[i] << " " << endl;
}
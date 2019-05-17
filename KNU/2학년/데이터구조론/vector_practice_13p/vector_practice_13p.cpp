// vector_practice_13p.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//int형 vector선언
	vector<int> v;
	for (int a = 1; a <= 10; ++a)
		// adds a to the end of the vector
		v.push_back(a);

	//returns the number of elements in the vector
	//int size()
	cout << v.size() << endl; //10

	//removes all elements from the vector
	//void clear()
	v.clear();
	cout << v.size() << endl; //0

	//returns whether the vector is empty
	//bool empty()
	cout << v.empty() << endl; //1


	for (int a = 1; a <= 10; ++a)
		// adds a to the end of the vector
		//void push_back(const Object &x)
		v.push_back(a);

	// removes the object at the end of the vector
	v.pop_back();

	// returns the object at the end of the vector
	// Object &back
	cout << v.back() << endl; //9

	// returns the object at the front of the vector
	// Object &front
	cout << v.front() << endl; //1

	//returns the internal capacity of the vector
	// int capacity()
	cout << v.capacity() << endl; // 13

	//sets the new capacity of the vector
	//void reserve(int newCapacity)
	v.reserve(15);
	cout << v.capacity() << endl; //15

	//changes the size of the vector
	//void resize(int newsize)
	cout << v.size() << endl; //9
	v.resize(10);
	cout << v.size() << endl; //10

	return 0;
}
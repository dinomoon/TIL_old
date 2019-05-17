// const_iterator_Example_9p.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

template <typename Container>
void print(const Container &c, ostream &out = cout)
{
	if (c.empty())
		cout << "(empty)";
	else
	{
		auto itr = c.begin(); // itr is a Container::const_iterator

		out << "[ " << *itr++; // print first item

		while (itr != c.end())
			out << ", " << *itr++;
		out << " ]" << endl;
	}
}

int main()
{
	vector<int> v;
	for (int a = 1; a <= 10; a++)
		v.push_back(a);

	print(v);

	return 0;
}
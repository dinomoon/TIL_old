// Iterator_Example_7p.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

template <typename Container >
void removeEveryOtherItem(Container &lst)
{
	auto itr = lst.begin();	//itr is a Container::iterator

	while (itr != lst.end())
	{
		itr = lst.erase(itr);
		if (itr != lst.end())
			++itr;
	}
}

int main()
{
	// 모든 원소가 지워지는 것이 아니라 6, 1, 2만 지워진다. (erase하면 다음 위치를 itr를 가리키는데 또 더해버려서)
	vector<int> v;
	v.push_back(6);
	v.push_back(5);
	v.push_back(1);
	v.push_back(4);
	v.push_back(2);

	vector<int>::iterator pos;
	for (pos = v.begin(); pos != v.end(); ++pos)
		cout << *pos << ' ';
	cout << endl;

	removeEveryOtherItem(v);

	for (pos = v.begin(); pos != v.end(); ++pos)
		cout << *pos << ' ';
	return 0;
}

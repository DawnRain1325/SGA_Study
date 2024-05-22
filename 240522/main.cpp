

#include <iostream>
#include <list>
#include <random>
#include <algorithm>

using namespace std;

random_device rd;

mt19937 gen(rd());

uniform_int_distribution<int> dis(1, 20);

list<int> number;

void Create() {
	for (int i = 0; i < 20; i++)
	{
		number.push_back(dis(gen));
	}
}
;

void Look()
{
	for (auto i = number.begin(); i != number.end(); ++i)

	cout << *i << endl;
}

int main() {
	

	Create();
	list<int>uniqueList = number;

	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n" << endl;

	Look();

	number.sort();
	number.unique();

	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡ중복 자료 제거 ㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n" << endl;
	Look();
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡ중복 자료 표기 ㅡㅡㅡㅡㅡㅡㅡㅡ\n" << endl;

	
	uniqueList.sort(); // 중복 제거된 리스트 정렬
	uniqueList.unique(); // 중복 제거된 리스트에서 중복 제거

	// 중복된 원소를 출력
	for (auto i = number.begin(); i != number.end(); ++i) {
		if (count(uniqueList.begin(), uniqueList.end(), *i) > 1) {
			cout << *i << endl;
		}
	}
}

	

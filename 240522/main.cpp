

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

	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n" << endl;

	Look();

	number.sort();
	number.unique();

	cout << "�ѤѤѤѤѤѤѤ��ߺ� �ڷ� ���� �ѤѤѤѤѤѤѤѤ�\n" << endl;
	Look();
	cout << "�ѤѤѤѤѤѤѤ��ߺ� �ڷ� ǥ�� �ѤѤѤѤѤѤѤ�\n" << endl;

	
	uniqueList.sort(); // �ߺ� ���ŵ� ����Ʈ ����
	uniqueList.unique(); // �ߺ� ���ŵ� ����Ʈ���� �ߺ� ����

	// �ߺ��� ���Ҹ� ���
	for (auto i = number.begin(); i != number.end(); ++i) {
		if (count(uniqueList.begin(), uniqueList.end(), *i) > 1) {
			cout << *i << endl;
		}
	}
}

	

#include <iostream>
#include <vector>
#include <random>
#include <set>
#include <list>

//������
//1. a-z , A-Z �迭�� ����
//2. �����ϰ� �����ؼ� �ִ� 15�ڷ� �� ���ڿ�
//3. ���ڿ��� 2�� ����� A,B
//4. ���ڿ� �� ���� ���ĺ��� A - B a ��� , a���� �����Ȱ� ���  
// A = {"asADF} , B= {"DFC"}
// A - B = {"asA"} , ������ ���� "DF"

using namespace std;

int main() {
	random_device rd;

	mt19937 gen(rd());

	uniform_int_distribution<> dis('A', 'Z');
	uniform_int_distribution<> diss('a', 'z');


	list<char> Alphabet;

	


	for (int i = 0; i < 13; i++)
	{
		Alphabet.push_back(dis(gen));
		Alphabet.push_back(diss(gen));
	}

	for (auto i = Alphabet.begin(); i != Alphabet.end(); ++i) 
	{
	cout << *i ;
	} 
	cout << endl << endl;

	list<char> A;
	list<char> B;

	for (int i = 0; i < 5; i++)
	{
		A.push_back(dis(gen));
		A.push_back(diss(gen));
	}

	for (int i = 0; i < 5; i++)
	{
		B.push_back(dis(gen));
		B.push_back(diss(gen));
	}

	cout << "�ѤѤѤѤѤѤѤѤѤ� A�� ���ڿ� �ѤѤѤѤѤѤѤѤѤѤ�\n\n";
	for (auto i = A.begin(); i != A.end(); ++i)
	{
		cout << *i << " , " ;
	}
	cout << "\n\n";

	cout << "�ѤѤѤѤѤѤѤѤѤ� B�� ���ڿ� �ѤѤѤѤѤѤѤѤѤ�\n\n";
	for (auto i = B.begin(); i != B.end(); ++i)
	{
		cout << *i << " , " ;
	}
	cout << "\n\n";

	if (A == B )
	{
		for (int i = 0; i < 15; i++)
		{

		}
	}
	else
	{

	}


	return 0;
}


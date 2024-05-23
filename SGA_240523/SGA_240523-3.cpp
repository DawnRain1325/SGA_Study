#include <iostream>
#include <vector>
#include <random>
#include <set>
#include <list>

//랜덤값
//1. a-z , A-Z 배열을 만듦
//2. 랜덤하게 선택해서 최대 15자로 된 문자열
//3. 문자열을 2개 만들기 A,B
//4. 문자열 비교 같은 알파벳이 A - B a 출력 , a에서 삭제된것 출력  
// A = {"asADF} , B= {"DFC"}
// A - B = {"asA"} , 삭제된 글자 "DF"

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

	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ A의 문자열 ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n\n";
	for (auto i = A.begin(); i != A.end(); ++i)
	{
		cout << *i << " , " ;
	}
	cout << "\n\n";

	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ B의 문자열 ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n\n";
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


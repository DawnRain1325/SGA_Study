//#include <iostream>
//#include <set>
//
//using namespace std;
//
////Set 특징
//// 1. 중복허용안함
//// 2. 정렬 자동정렬 , 내림차순
//// 3. 검색 , 삽입 , 삭제 빠르다.
//
//
////주요 함수
////insert(Value) //값을 추가 , 중복된값은 추가되지않음.
////erase(Value) // 값을 찾아서 삭제
////find(value) // 매칭된 값을 찾아줌. 못찾으면 end()
////begin() , end() // 시작 , 끝을 가리키는 이터레이터를 반환한다.
//
//int main() {
//
//	set<int> mySet; //size 0
//	if (mySet.empty())
//
//	{
//		mySet.insert(5);
//		mySet.insert(15);
//		mySet.insert(30);
//		mySet.insert(2); //자동 정렬
//
//	}
//
//	mySet.insert(30);
//
//	for (int value : mySet)
//	{
//		cout << value << " ";
//	}
//
//	cout << endl;
//
//	cout << "erase(30) _ test " << endl;
//
//	mySet.erase(30);
//
//	for (int value : mySet)
//	{
//		cout << value << " ";
//	}
//	cout << endl;
//
//	//find 
//
//	auto it = mySet.find(15);
//	if (it != mySet.end())
//	{
//		//값을 찾았다.
//		cout << "15 값을 찾았습니다." << endl;
//	}
//	else
//	{ 
//		//값을 못찾음.
//		cout << "15값이 없습니다." << endl;
//
//	}
//
//	cout << mySet.size();
//}
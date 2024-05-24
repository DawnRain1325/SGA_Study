//#include <iostream>
////중복 허용하지않음 . 자동정렬
//#include <set>
////자동정렬이 안되는것 unordered_set
//#include <unordered_set>
//
//using namespace std;
//
//int main()
//{
//	set<int> mySet;
//	unordered_set<int> myuo_Set;
//
//	mySet.insert(100);
//	mySet.insert(10);
//	mySet.insert(20);
//	mySet.insert(10);
//
//	for (int num : mySet)
//	{
//		cout << num << "";
//	}
//
//	cout << endl;
//
//	mySet.insert(100);
//	mySet.insert(10);
//	mySet.insert(20);
//	mySet.insert(10);
//
//	for (int num : mySet)
//	{
//		cout << num << "";
//	}
//
//	if (myuo_Set.find(100) != myuo_Set.end())
//	{
//		cout << "찾으려는 숫자가 있습니다.";
//	}else 
//	{
//		cout << " 찾으려는 숫자가 없습니다.";
//	}
//
//	myuo_Set.erase(100);
//
//	return 0;
//
//
//}
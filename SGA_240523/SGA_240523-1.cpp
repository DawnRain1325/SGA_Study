//#include <iostream>
//#include <set>
//#include <vector>
//
//using namespace std;
//typedef vector<int>::iterator It_INT;
////iterator (반복)
//
//int main() {
//
//	vector<int> vec = { 1,2,3,4,5 } ; //size 5
//
//	cout << vec.size() << endl;
//
//	vec.push_back(10);
//	
//	vector<int>::iterator it_start = vec.begin();
//	vector<int>::iterator it_end = vec.end(); // 5다음에 끝을 가리키고 값이 NULL 
//	
//	//for (auto it_start = vec.begin(); it_start != vec.end(); ++it_start)
//	for (It_INT it_start = vec.begin(); it_start != vec.end(); ++it_start)
//	{
//		//int num = *it_start;
//		//num *= 2;
//		(*it_start) *= 2;
//
//		cout << *it_start << endl;
//	}
//
//	//C+11 , C+17 ,C+20
//
//	return 0;
//}
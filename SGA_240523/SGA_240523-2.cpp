//#include <iostream>
//#include <set>
//
//using namespace std;
//
////Set Ư¡
//// 1. �ߺ�������
//// 2. ���� �ڵ����� , ��������
//// 3. �˻� , ���� , ���� ������.
//
//
////�ֿ� �Լ�
////insert(Value) //���� �߰� , �ߺ��Ȱ��� �߰���������.
////erase(Value) // ���� ã�Ƽ� ����
////find(value) // ��Ī�� ���� ã����. ��ã���� end()
////begin() , end() // ���� , ���� ����Ű�� ���ͷ����͸� ��ȯ�Ѵ�.
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
//		mySet.insert(2); //�ڵ� ����
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
//		//���� ã�Ҵ�.
//		cout << "15 ���� ã�ҽ��ϴ�." << endl;
//	}
//	else
//	{ 
//		//���� ��ã��.
//		cout << "15���� �����ϴ�." << endl;
//
//	}
//
//	cout << mySet.size();
//}
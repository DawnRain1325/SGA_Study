//#include <iostream>
//
//using namespace std;
//class Animal {
//
//public:
//	virtual void makesound() = 0 ;
//
//};
//
//class Dog : public Animal {
//public:
//	Dog() {
//		nType = 0;
//	}
//	Dog(int _type) {
//		nType = _type;
//	}
//	~Dog() {
//
//	}
//	static int nType; 
//	string name;
//	virtual void makesound() override {
//
//		if (nType == 1)
//		{
//			cout << "멍 !!!!!!!!!! 멍!!!!!!!\n";
//
//		}
//		else
//		{
//			cout << "멍 멍!\n";
//		}
//		cout << "멍 멍!\n";
//	}
//
//	static void Display()
//	{
//		if (Dog::nType >= 0)
//		{
//			name = "강아지이름";
//		}
//		
//		cout << "static 함수가 호출되었습니다.\n";
//	}
//};
//class BlackDog : public Dog {
//
//public:
//	void makesound() override { cout << "멍!!! 멍!!!!\n"; }
//};
//int Dog::nType = 0;
//
//static int nType = 0;
//
//int main() {
//
//	Dog::nType = 1;
//
//	Dog::Display();
//	
//	Display();
//
//	Dog dog, blackdog(Dog::nType);
//	//BlackDog blackdog;
//	
//	dog.makesound();
//	blackdog.makesound();
//
//	blackdog.Display();
//	Dog::Display();
//
//	return 0;
//
//}

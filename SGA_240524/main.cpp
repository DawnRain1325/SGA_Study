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
//			cout << "∏€ !!!!!!!!!! ∏€!!!!!!!\n";
//
//		}
//		else
//		{
//			cout << "∏€ ∏€!\n";
//		}
//		cout << "∏€ ∏€!\n";
//	}
//
//	static void Display()
//	{
//		if (Dog::nType >= 0)
//		{
//			name = "∞≠æ∆¡ˆ¿Ã∏ß";
//		}
//		
//		cout << "static «‘ºˆ∞° »£√‚µ«æ˙Ω¿¥œ¥Ÿ.\n";
//	}
//};
//class BlackDog : public Dog {
//
//public:
//	void makesound() override { cout << "∏€!!! ∏€!!!!\n"; }
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
//#include <iostream>
//
//
////Ŭ���� ����
///*
//
//class Ŭ����_�̸�
//{
//	public: //��𼭵��� ���ٰ��� , ���� , �Լ�
//	private : //Ŭ���� �������� ���ٰ��� , defalut
//	protected : // �ڽ� ��밡�� , Ŭ���� ���ο����� ��밡��
//}
//
//*/
//
//
//class Car {
//	private : //default ����
//		int value;
//		int privateVar;
//		int x, y;
//public:
//	Car();
//	Car(const Car& other);
//	~Car();
//
//	int num;
//	void privateFunc1(int x , int y) {
//		this->x = x;
//		this->y = y;
//		
//	}
//
//private:
//	int privateValue;
//	int privateValue2;
//	void privateFunc();
//
//protected:
//	int protecVar;
//};
//
//Car::Car(const Car& other) {
//	this-> other.x;
//	this-> other.y;
//}
//
//Car::~Car() {
//
//}
//
//void Car::privateFunc() {
//	int i = 100;
//}
//
//int main()
//{
//	Car car; //�ν��Ͻ� ����1
//	car.privateFunc1(5,4);
//
//	Car* pCar = new Car(); // �ν��Ͻ� �������2 , �����Ҵ�
//	pCar->privateFunc1(10,100);
//
//	delete pCar;
//
//	//Car car1(car); //car �� ���� ������ car1 �� ����
//	pCar = &car;
//	carl.privateFunc1();
//}
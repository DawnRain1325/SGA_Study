//#include <iostream>
//
//
////클래스 선언
///*
//
//class 클래스_이름
//{
//	public: //어디서든지 접근가능 , 변수 , 함수
//	private : //클래스 내에서만 접근가능 , defalut
//	protected : // 자식 사용가능 , 클래스 내부에서도 사용가능
//}
//
//*/
//
//
//class Car {
//	private : //default 선언
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
//	Car car; //인스턴스 생성1
//	car.privateFunc1(5,4);
//
//	Car* pCar = new Car(); // 인스턴스 생성방법2 , 동적할당
//	pCar->privateFunc1(10,100);
//
//	delete pCar;
//
//	//Car car1(car); //car 에 대한 내용을 car1 에 대입
//	pCar = &car;
//	carl.privateFunc1();
//}
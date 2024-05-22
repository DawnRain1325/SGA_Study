////객체지향언어 (OOP) 핵심 개념
//클래스:
//
//1.하나의 클래스 하나의 책임만 가져야 된다.
//2.상속에 대해서 부모 클래스의 자식과의 관계를 설정을 유지해야한다.
//Animal, Dog, Cat, snake, bird
//코드 중복을 줄여줌.
//확장성을 높여줌.
//
//클래스간의 형변환
//업캐스팅 : 자식->부모클래스로 변환(일반적)
//다운캐스팅 : 부모클래스->자식클래스(구체화)
//
//class Animal {
//	public animal
//};
//
//class Dog : public Animal {
//
//};
//// Animal* animal = new Animal;
//Animal* animal = new Dog; //업캐스팅 (자식 -> 부모캐스팅)
//Dog* dog = dynamic_cast<Dog*>(animal); //다운캐스팅 (부모 ->자식)
//
//클래스간의 형변환
//업캐스팅 : 자식 ->부모클래스로 변환(일반적)
//다운캐스팅 : 부모클래스 ->자식클래스(구체화)
//
////인터페이스
//class IAnimal
//{
//public:
//	//가상함수
//	virtual void Speak() = 0;
//	//순수 가상함수
//	virtual void Speak1() = 0; //자식한테 무조건 이함수를 구현해라.
//
//};
//
//class dog : pubilc Animal {
//public:
//	void Speak(){
//		std::cout << "멍멍\n";
//	}
//
//		void Speak1() {}
//};
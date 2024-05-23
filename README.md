statment (구문)

For 문의 기초 

![image](https://github.com/DawnRain1325/SGA_Study/assets/147826246/42b8aa12-8e39-4f50-9b5d-a6e9a62b50fa)
가장 기초적인 for문의 구조

![image](https://github.com/DawnRain1325/SGA_Study/assets/147826246/deca2231-795d-43b2-996e-a74dd6643e25)

statment1 의 값을 조건에 맞게 test 하고 

test 하여 참이 나올경우 statment2 를 실행

int expression 을 upadte expression 함 ( 예를들어 i++ 은 i 에 값을 사용후 1을 더한다는 의미)

그렇게 거짓이 나올 때 까지 실행하다가 거짓이 나오면 statement3 로 넘어감.

함수와 비슷하지만 절대 함수가 아님.


어떠한 표현식에도 세미콜론만 붙이면 statment(프로그램 실행단위)이 되나

그 역은 성립이 되지 않음.

다시 풀어서 말하자면 세미콜론을 안붙인다고 해서 statment가 안되는건 아님

int a ; 는 구문

eggs = int a *1000 ; 틀린표현 int a 가 expression 이 아님
cin >> int a ; // 역시 틀린표현 cin과 선언을 결합 자체가 안됨.

마찬가지로 for 루프를 변수에 대입하는것이 불가능

int fx = for (i=0; i<4; i++)
cout << i;

이런 형태로 사용이 안됨.


![image](https://github.com/DawnRain1325/SGA_Study/assets/147826246/01eb6ea6-18b2-44f9-84bc-0c1c3ab74661)

![image](https://github.com/DawnRain1325/SGA_Study/assets/147826246/60bc1785-0f59-4ba5-813d-ba1dce325d3d)


![image](https://github.com/DawnRain1325/SGA_Study/assets/147826246/bc1238f4-a68b-41da-9180-aaf7d975257d)
243P 에 For문 루프에 배열을 사용한 예제.


![image](https://github.com/DawnRain1325/SGA_Study/assets/147826246/fbc4ab83-235f-4415-b2fe-72e63a8c53e0)

![image](https://github.com/DawnRain1325/SGA_Study/assets/147826246/36986e40-7537-41ba-b6ee-6c516829aa37)
For문을 사용하여 백준 2739번 문제 풀이한 코드.




#include <iostream>
#include <list>
#include <random>

using namespace std;

random_device rd;

mt19937 gen(rd());

uniform_int_distribution<int> dis(1, 20);

list<int> number;
void Create() {
	for (int i = 0; i < 20; i++)
	{
		number.push_back(dis(gen));
	}
}
;

void Look() {for (auto i = number.begin(); i != number.end(); ++i)

	cout << *i << endl;
}

int main() {


	Create();

	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n" << endl;

	Look();

	number.sort();
	for (int *i; *i < 20; *i++)
	{
		for (int *j ; *j<20; *j++)
			if (number(*i) == number(*j))
			{
				number.remove(*i);
			}



	}
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡ중복 자료 제거 ㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n" << endl;
	Look();
	cout << "ㅡㅡㅡㅡㅡㅡㅡㅡ중복 자료 표기 ㅡㅡㅡㅡㅡㅡㅡㅡ\n" << endl;


이 코드는 몇 가지 문제가 있습니다. 여기에는 다음과 같은 문제가 있습니다:

중첩 반복문 내에서 루프 변수를 포인터로 사용하고 있습니다. 이것은 잘못된 접근 방식입니다. 포인터를 사용하여 루프를 제어하는 것은 잘못된 사용입니다. 포인터가 정의되지 않은 메모리 영역을 가리키거나, 무한 루프에 빠질 수 있습니다.

중복된 숫자를 제거하는 부분에서 잘못된 방법을 사용하고 있습니다. list 컨테이너는 중복된 원소를 허용합니다. 중복된 원소를 제거하기 위해서는 다른 방법을 사용해야 합니다.

중복된 원소를 제거하는 방법도 비효율적입니다. 중복된 원소를 찾아서 삭제할 때마다 모든 리스트를 순회하므로 시간 복잡도가 매우 높습니다.



While문의 기본개념 정의 

![image](https://github.com/DawnRain1325/SGA_Study/assets/147826246/c691a0b2-feb2-4e0d-b2a7-9d6c31efb2fa)

![image](https://github.com/DawnRain1325/SGA_Study/assets/147826246/8d4033be-11e1-4b0b-8e7d-8c661c7edf53)

while 루프의 작동원리



while 문으로 간단히 짜본 예제 코드

![image](https://github.com/DawnRain1325/SGA_Study/assets/147826246/b57d9429-c6b0-499d-9f0d-9f5a0ec80e9a)

![image](https://github.com/DawnRain1325/SGA_Study/assets/147826246/d73e77d6-9c34-461c-8b45-6fecc0ff90b5)

while for 형태로 변환

예제 코드를 직접 for 으로 변환

![image](https://github.com/DawnRain1325/SGA_Study/assets/147826246/8c405a7c-7930-419b-bd2e-a9524f08016c)


![image](https://github.com/DawnRain1325/SGA_Study/assets/147826246/68d9ede8-a814-4935-a410-f0e4ac1403ba)


do while 루프 프로그램의 흐름

![image](https://github.com/DawnRain1325/SGA_Study/assets/147826246/2d92f435-7ec6-44ed-9cc9-76c48327f6c6)

dowhile 문의 예제

루프를 먼저 실행하고 조건을 나중에 검사하며

사용자에게 값을 입력받아 반복문 돌릴때 유용한 구문.

안녕하세요

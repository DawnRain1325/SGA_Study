//#include <iostream>
//
//using namespace std;
//
//
//int main() {
//	int n;
//
//	cout << "1부터 10까지의 수 중에서 ";
//	cout << "내가 좋아하는 수를 맞춰보십시오.\n";
//
//	do
//	{
//		cin >> n;
//	} while (n != 7);
//	cout << "맞았습니다. 내가 좋아하는 수는 럭키 세븐 7입니다.\n";
//	return 0;
//	//doWhile 문으로 사용자에게 값을 입력받을때 사용하면 괜찮은 프로그래밍
//	//루프를 먼저 실행하고 조건을 나중에 검사함.
//}

// for (init-expr ; test-expr ; upadte-expr)
//{
//	statment(s)
//}
//
//같은것.
//
//init - expression;
//while (test - expr)
//{
//	statment(s)
//		upadte-expr
//}





//const int ArSize = 20;
//
//int main() {
//
//	using namespace std;
//	char name[ArSize];
//
//	cout << "이름 입력 ";
//	cin >> name;
//	cout << "영문 이름을 한줄에 한자 씩\n";
//	cout << "ASCII 코드와 함께 표기시\n";
//	int i = 0;
//
//
//	for (int i = 0; name[i] != '\0'; i++)
//	{
//		cout << name[i] << " : " << int(name[i]) << endl;
//	}
//	//while (name[i] != '\0') // 배열안에 있는 특정 문자가 널 문자 인지 검사
//	//	//
//	//{
//	//	cout << name[i] << " : " << int(name[i]) << endl;
//	//	i++;
//	//}
//	//return 0;
//}

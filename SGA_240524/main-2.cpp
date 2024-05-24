
//map<key, value>
//key 값은 중복되면 안되고 유일해야됨.
//map <string, vector<MusicInfo>> myMap;
//나중에 key 를 찾으면 value가 나옴
//
//vector <MuisicInfo> myvect = myMap[key];
//
//map<string , vector <MusicInfo>> ::myMap.find("가수이름")


//class IU
//{
//	IU();
//	~IU();
//};

//노래 정보모음.

//가수로 찾고 입력해서
//노래정보 입력 가능하게
//가수 -> 노래 2개,
//노래 1 , < , > 또는 화살표 , 노래 정보를 하나씩 보여주는 프로그램.


#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "header.h"

using namespace std;




int main()
{
	Title();
	map<string , MusicInfo1 > singer;

	while(true)
	{
	char A;
	A = 0;
	int input;
	cin >> input;
		switch (input)
		{
		case 1:
		{
		Title();
		

		cin >> input;
		break;
		}
		case 2:

			cout << "가수목록입니다.";
		while (A != '#')
		{
			
			cin >> A;

			
			
		/*	for (auto it = singer.begin(); it !=singer.end(); it++)
			{
				cout << it->first << endl;
			}*/
			cin >> input;
			break;
	
		}

		case 3:
			cout << "노래를 삽입하실려고요? ";
			
			cin >> input;
			break;
		case 4: 


			cin >> input;
			break;
		case 5:

			cin >> input;
			break;
		}
	}
	return 0;
}


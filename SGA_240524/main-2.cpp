
//map<key, value>
//key ���� �ߺ��Ǹ� �ȵǰ� �����ؾߵ�.
//map <string, vector<MusicInfo>> myMap;
//���߿� key �� ã���� value�� ����
//
//vector <MuisicInfo> myvect = myMap[key];
//
//map<string , vector <MusicInfo>> ::myMap.find("�����̸�")


//class IU
//{
//	IU();
//	~IU();
//};

//�뷡 ��������.

//������ ã�� �Է��ؼ�
//�뷡���� �Է� �����ϰ�
//���� -> �뷡 2��,
//�뷡 1 , < , > �Ǵ� ȭ��ǥ , �뷡 ������ �ϳ��� �����ִ� ���α׷�.


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

			cout << "��������Դϴ�.";
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
			cout << "�뷡�� �����ϽǷ����? ";
			
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


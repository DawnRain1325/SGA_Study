#include <iostream>
#include <vector>

using namespace std;

int main() {
	int X ;
	int N ;
	int a, b;
	

	cin >> X;
	cin >> N;

	
	vector<int> aa;
	vector<int> bb;

	for (int i = 0; i < N; i++)
	{
		cin >> a;
		aa.push_back(a);
		cin >> b;
		bb.push_back(b);
	}
	
	int sum = 0 ;
	for (int i = 0; i < N; i++)
	{
		   
		sum += aa[i] * bb[i];
		
	}
	
	if (X == sum )
	{
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}





}

//for (int i = 0; i < aa.size(); i++)
//{
//	cout << aa[i] << " ";
//}
//
//for (int i = 0; i < bb.size(); i++)
//{
//	cout << bb[i] << " ";
//}
// cout << sum << endl; 
#include <iostream>
#include <cstdlib>
using namespace std;
/*
請幫忙撰寫一個計算總分的程式，不論使用者輸入幾科的分數，都需要加總，只要使用者輸入0就代表輸入結束，並輸出總分。
範例輸入1:
52
68
75
83
36
0
範例輸出1:
總分為314分

範例輸入2:
100
50
75
0
範例輸出2:
總分為225分
*/ 
int main()
{
	int a,sum;
	cin>>a;
	while(a!=0)
	{
		sum=a+sum;
		cin>>a;
	}
	cout<<"總分為"<<sum<<"分";
	
   //system("pause");
   return 0;
}


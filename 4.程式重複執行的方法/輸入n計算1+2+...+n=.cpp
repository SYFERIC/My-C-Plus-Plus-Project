#include <iostream>
#include <cstdlib>
using namespace std;
/*
給一個數字n 請幫忙計算1+2+...n的總和

輸入資料1:
10
輸出資料1:
55

輸入資料2:
100
輸出資料2:
5050
*/ 
int main()
{
	int a;
	cin>> a; 
	cout<< a*(a+1)/2; 
   //system("pause");
   return 0;
}


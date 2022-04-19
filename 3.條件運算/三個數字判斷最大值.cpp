
#include <iostream>
#include <cstdlib>
using namespace std;
/*
【問題描述】
給三個整數,找出最大值 

【輸入說明】
輸入為三個整數，屬於int範圍之內.

【輸出說明】
輸出一個整數,為此三個整數的最大值
(最後加上換行) 

【輸出入範例】
Sample Input1 :
1 2 3
Sample Output1 :
3

Sample Input2 :
-10 -8 -12
Sample Output2 :
-8
*/ 
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a>=b and a>=c)
	 {cout<< a <<"\n";
	 }
	 else if(b>=c)
	 {cout<< b <<"\n";
	 }
	 else
	 {cout<< c <<"\n";
	 }
   //system("pause");
   return 0;
}


#include <iostream>
#include <cstdlib>
using namespace std;
/*
【問題描述】
請幫忙判斷輸入的年份是否為閏年。
如果是， 請輸出 LEAP! 
如果不是， 請輸出 NOT LEAP! 

【輸入說明】
輸入為一個整數,代表年份

【輸出說明】
輸出為"LEAP!" 或 "NOT LEAP!"
詳細輸出請參考Sample Output

閏年規則如下：
1.西元年份除以400可整除，為閏年。
2.西元年份除以4可整除並且除以100不可整除，為閏年。
3.西元年份除以4不可整除，為平年。
4.西元年份除以100可整除並且除以400不可整除，為平年
【輸出入範例】

Sample Input1 :
2000
Sample Output1 :
LEAP!

Sample Input2 :
300
Sample Output2 :
NOT LEAP! 
*/ 
int main()
{
	int a;
	cin>>a;
	if(a%400==0)
	 {cout<<"LEAP! \n";
	 }
	 else if(a%100 ==0)
	  {cout<<"NOT LEAP! \n";
	 }
	 else if(a%4==0)
	 {cout<<"LEAP!\n";
	 }
	 else
	 {cout<<"NOT LEAP! \n";
	 }
   //system("pause");
   return 0;
}


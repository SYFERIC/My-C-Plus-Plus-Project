#include <iostream>
#include <cstdlib>
using namespace std;
/* 
【問題敘述】
小華跟小明挑戰解5階魔術方塊，小華常向小明炫耀，自己可以在幾秒內破解魔術方塊。
數學不好的小明，總是覺得自己比較弱。因為他常常搞不懂3960秒，究竟有沒有比自己1小時2分鐘30秒來的快，只好每次接受小華的炫耀。你可以幫忙他解決這個問題嗎?
只要幫他換算出， 小華的秒數為幾小時幾分鐘幾秒，就可以讓他知道自己是輸還是贏了。

【輸入說明】
輸入秒數:
3960
【輸出說明】
輸出換算:
1小時6分0秒

Sample input 1：
3960
Sample output 1：
1小時6分0秒

Sample input 2：
4968
Sample output 2：
1小時22分48秒
*/ 
int main()
{

	int a,hr,min,sec;
	cin>>a;
	hr=a/3600;
	min=a%3600/60;
	sec=a%60;
	cout<<hr<<"小時"<<min<<"分"<<sec<<"秒" ;
	   //system("pause");
   return 0;
}


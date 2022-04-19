#include <iostream>
#include <cstdlib>
using namespace std;
/*
【問題描述】
我只知道現在這個形狀是長方形或圓形 , 你能算出它的面積嗎 

【輸入說明】
輸入第一個字為一個字元 , 若為R , 則後面會跟著兩個小數 , 代表長跟寬 ,
若為C , 則後面會跟著一個小數 , 代表半徑 , 當然 , 不會有不是R而且不是C的字元 .
輸入的小數精確度都在double範圍之內 , 

在這裡的程式:我們定義PI = 3.1415926 , 請不要使用更精確或更不精確的PI 

【輸出說明】
輸出一個小數,為此形狀的面積
(最後加上換行) 

【輸出入範例】
Sample Input1 :
R 5 6 
Sample Output1 :
30

Sample Input2 :
C 5
Sample Output2 :
78.5398 
*/ 
int main()
{
	char a;
	double b,c;
	cin>>a>>b;
	if (a=='R'){
	cin>>c;
	cout<<b*c<<"\n";
	
	}
	else if(a=='C') 
	
	
	
	cout<<b*b*3.1415926<<"\n";

}


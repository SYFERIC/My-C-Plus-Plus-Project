#include <iostream>
#include <cstdlib>
using namespace std;
/*
小華受邀設計一個電腦格鬥遊戲，在遊戲的過程中，必須使用鍵盤來做人物移動的控制
假設遊戲中這七個按鍵的功能如下:
W w 上
S s 下
A a 左
D d 右
F f 攻擊
J j 跳躍
H h 防守

請你幫忙寫出程式，幫小華進行測試，請依照使用者輸入的動作按鍵(char 型態)輸出相對應的動作文字。若使用者輸入的動作按鍵非上述七個，
則輸出無效動作。( 大小寫按鍵，功能相同 )
輸入資料1:
W
輸出資料1:
上
輸入資料2:
d
輸出資料2:
右

輸入資料3:
G
輸出資料3:
無效動作
*/ 
int main()
{
	char a;
	cin>> a; 
	if (a=='W' or a=='w')
	cout<<"上";
	else if(a=='S' or a=='s') 
	cout<<"下";
	else if(a=='A' or a=='a') 
	cout<<"左";
	else if(a=='D' or a=='d') 
	cout<<"右";
	else if(a=='F' or a=='f') 
	cout<<"攻擊";
	else if(a=='J' or a=='j') 
	cout<<"跳躍";
	else if(a=='H' or a=='h') 
	cout<<"防守";
	else 
	cout<<"無效動作";
   //system("pause");
   return 0;
}


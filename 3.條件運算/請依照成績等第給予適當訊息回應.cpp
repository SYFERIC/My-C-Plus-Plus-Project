#include <iostream>
#include <cstdlib>
using namespace std;
/*
陳老師為給分數等第傷腦筋，請幫他寫個程式，依照同學的分數給適當的等第。
分數為100分的評語為
Excellent!
分數大於等於90分的評語為
A!
分數大於等於80分的評語為
B!
分數大於等於70分的評語為
C!
分數大於等於60分的評語為
D!
分數小於60分的評語為
F!
輸入資料1:
100
輸出資料1:
Excellent!
輸入資料2:
89
輸出資料2:
B!
*/ 
int main()
{	
	int a;
	cin>>a;
	if(a==100)
	cout<<"Excellent!";
	else if(a<100 and a>=90)
	cout<<"A!";
	else if(a<90 and a>=80)
	cout<<"B!";
	else if(a<80 and a>=70)
	cout<<"C!";
	else if(a<70 and a>=60)
	cout<<"D!";
	else if(a<60)
	cout<<"F!";	
	return 0;
}


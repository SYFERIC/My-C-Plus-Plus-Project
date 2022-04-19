#include <iostream>
#include <cstdlib>
using namespace std;
/*
大於>
小於<
等於==
大於等於>=
小於等於<=
不等於 !=
*********************************************
上述右側為C++ 中，關係運算子的表示法

若兩數的大小關係是正確的，
則以 cout 指令將兩數關係輸出，
將會顯示 1
=====================
若兩數的大小關係是錯誤的，
則以 cout 指令將兩數關係輸出，
將會顯示 0

說明:
cout<<(5>3);
輸出結果為 1

cout<<(8<4);
輸出結果為 0

cout<<(5>=5);
輸出結果為 1

作業說明:
任意輸入兩個整數，並將此二數的大小關係依指定格式輸出

輸入:
8 2

輸出:
8>2 the result is 1
8==2 the result is 0
8<2 the result is 0
8!=2 the result is 1
*/ 
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<a<<">"<<b<<" the result is "<<(a>b)<<"\n";
	cout<<a<<"=="<<b<<" the result is "<<(a==b)<<"\n";
	cout<<a<<"<"<<b<<" the result is "<<(a<b)<<"\n";
	cout<<a<<"!="<<b<<" the result is "<<(a!=b)<<"\n";

   //system("pause");
   return 0;
}


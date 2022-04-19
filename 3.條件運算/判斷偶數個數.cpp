#include <iostream>
#include <cstdlib>
using namespace std;
/*
文文很喜歡偶數，他甚至有收集偶數的習慣。
你給他一個範圍的連續整數，他就會把其中的偶數留下來收藏。
如今他又拿到了一個範圍的整數，請問他這次收藏了幾個偶數？
對文文來說，0 也算是一個偶數哦！

輸入說明
輸入只有一行，其中含有兩個由空白隔開的整數 a, b (0 ? a ? b ? 2147483647)。
輸出說明
輸出一個整數，代表 a 與 b 之間 (含 a 與 b) 一共有多少個偶數。

範例輸入
1 4
範例輸出
2
*/ 
int main()
{
	int a,b;
	cin>>a>>b;
	if (a%2==1 and b%2==1)
	cout<<(b-a)/2;
	else if (a%2==0 and b%2==0)
	cout<<((b-a)/2)+1;
	else
	cout<<(b-a+1)/2;
   //system("pause");
   return 0;
}


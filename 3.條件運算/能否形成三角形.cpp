#include <iostream>
#include <cstdlib>
using namespace std;
/*
三角形的三邊長一定要符合任兩邊邊長和大於第三邊的條件。
反過來說，給你三根木條，任挑其中兩根木條長度和都大於第三根木條時，那這三根木條也一定能拼一個三角形。
 
請你寫個程式判斷一下，給你三根木條，長度分別為a、b、c時，這三根木條能不能拼成一個三角形。
輸入說明
三個整數a、b、c

輸出說明
若這三根木條能組成三角形，就輸出Yes，否則輸出No

input 1
3 5 3
output 1
Yes
input 2
5 2 2
output 2
No
*/ 
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>c and b+c>a and  a+c>b)
	 {cout<<"Yes\n";
	 }
	 else
	 {cout<<"No\n";
	 }
   //system("pause");
   return 0;
}


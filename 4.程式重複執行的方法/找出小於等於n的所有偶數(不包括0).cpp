#include <iostream>
#include <cstdlib>
using namespace std;
/*
給一個正整數N，請幫忙找出所有小於等於N的偶數(不包含0)。每個符合的答案中，用空白鍵隔開。
範例輸入1:
5
範例輸出1:
2 4
範例輸入1:
10
範例輸出1:
2 4 6 8 10
*/ 
int main()
{
	int a,i;
	cin>>a;
	for (i=2 ; i<=a ; i=i+2)
	{
		cout<<i<<" ";
	}
	
   //system("pause");
   return 0;
}


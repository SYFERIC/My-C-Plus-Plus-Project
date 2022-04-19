
#include <iostream>
#include <cstdlib>
using namespace std;
/*
請幫忙印出請印出n行n顆星的圖形
輸入範例1
5
輸出範例1
*****
*****
*****
*****
*****

輸入範例2
3
輸出範例2
***
***
***

*/ 
int main()
{
	int a,i,j;
	cin>>a;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			cout<<'*';
		}
		cout<<"\n";
	}
	
   //system("pause");
   return 0;
}


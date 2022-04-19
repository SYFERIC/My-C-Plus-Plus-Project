#include <iostream>
#include <cstdlib>
using namespace std;
/*
請幫忙輸出n行的倒直角三角形圖形
範例輸入1
5
範例輸出1
*****
****
***
**
*
範例輸入2
3
範例輸出2
***
**
*

*/ 
int main()
{
	int a,i,j;
	cin>>a;
	for(i=a;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			cout<<'*';
		}
		cout<<"\n";
	}
	
   //system("pause");
   return 0;
}


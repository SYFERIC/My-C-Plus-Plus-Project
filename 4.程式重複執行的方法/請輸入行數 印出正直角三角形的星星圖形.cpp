#include <iostream>
#include <cstdlib>
using namespace std;
/*
請幫忙輸出n行的直角三角形星星圖形
範例輸入1
5
範例輸出1
*
**
***
****
*****
範例輸入2
3
範例輸出2
*
**
***

*/ 
int main()
{
	int a,i,j;
	cin>>a;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<'*';
		}
		cout<<"\n";
	}
	
   //system("pause");
   return 0;
}


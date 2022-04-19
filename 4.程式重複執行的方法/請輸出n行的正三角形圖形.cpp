#include <iostream>
#include <cstdlib>
using namespace std;
/*
請幫忙輸出n行的正三角形圖形
範例輸入1
5
範例輸出1 (說明:這5行中, 每行的星星個數為 1 3 5 7 9)
    *
   ***
  *****
 *******
*********
範例輸入2
3
範例輸出2 (說明:這3行中, 每行的星星個數為 1 3 5)
  *
 ***
*****

*/ 
int main()
{
	int a,h,i,j;
	cin>>a;
	int k=1;

	for(h=a;h>=1;h--)
	{
		for(i=h-1;i>=1;i--)
		{
			cout<<" ";			
		}
		for(j=1;j<=k;j++)
		{
			cout<<'*';
		}
		k=k+2;
		cout<<"\n";	
	}

   //system("pause");
   return 0;
}


#include <iostream>
#include <cstdlib>
using namespace std;
/*請幫忙印出n行倒的正三角形圖形

範例輸入1
5
範例輸出1
*********
 *******
  *****
   ***
    *
    
範例輸入2
3
範例輸出2
*****
 ***
  *
  
*/ 
int main()
{
	int a,h,i,j;
	cin>>a;
	int k=1;

	for(h=1;h<=a;h++)
	{
		for(i=h;i<=k-1;i++)
		{
			cout<<" ";			
		}
		for(j=2*a-1;j>=k;j--)
		{
			cout<<'*';
		}
		k=k+2;
		cout<<"\n";	
	}

   //system("pause");
   return 0;
}


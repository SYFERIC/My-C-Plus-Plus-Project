#include <iostream>
#include <cstdlib>
using namespace std;
/*�������L�Xn��˪����T���ιϧ�

�d�ҿ�J1
5
�d�ҿ�X1
*********
 *******
  *****
   ***
    *
    
�d�ҿ�J2
3
�d�ҿ�X2
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


#include <iostream>
#include <cstdlib>
using namespace std;
/*
��������Xn�檺���T���ιϧ�
�d�ҿ�J1
5
�d�ҿ�X1 (����:�o5�椤, �C�檺�P�P�ӼƬ� 1 3 5 7 9)
    *
   ***
  *****
 *******
*********
�d�ҿ�J2
3
�d�ҿ�X2 (����:�o3�椤, �C�檺�P�P�ӼƬ� 1 3 5)
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


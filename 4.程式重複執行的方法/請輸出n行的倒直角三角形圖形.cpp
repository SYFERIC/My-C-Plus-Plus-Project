#include <iostream>
#include <cstdlib>
using namespace std;
/*
��������Xn�檺�˪����T���ιϧ�
�d�ҿ�J1
5
�d�ҿ�X1
*****
****
***
**
*
�d�ҿ�J2
3
�d�ҿ�X2
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


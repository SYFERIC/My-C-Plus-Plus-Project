#include <iostream>
#include <cstdlib>
using namespace std;
/*
��������Xn�檺�����T���άP�P�ϧ�
�d�ҿ�J1
5
�d�ҿ�X1
*
**
***
****
*****
�d�ҿ�J2
3
�d�ҿ�X2
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


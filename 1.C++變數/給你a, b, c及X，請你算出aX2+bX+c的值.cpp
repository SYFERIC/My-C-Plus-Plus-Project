#include <iostream>
#include <cstdlib>
using namespace std;
/* 
���Aa, b, c��X�A�ЧA��XaX2+bX+c����
��J����
�D�ئ��h����J
�C�@�C: �|�Ӿ�� a, b, c, X
��X����
��C�@�C��X ans=aX2+bX+c

input
1 2 3 4
0 0 100 20
1 0 0 11

output
ans=27
ans=100
ans=121
*/ 
int main()
{
	int a,b,c,x;

	while(cin>>a>>b>>c>>x)
	cout<<"ans="<<a*x*x+b*x+c<<"\n";



   return 0;
    
}


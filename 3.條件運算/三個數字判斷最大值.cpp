
#include <iostream>
#include <cstdlib>
using namespace std;
/*
�i���D�y�z�j
���T�Ӿ��,��X�̤j�� 

�i��J�����j
��J���T�Ӿ�ơA�ݩ�int�d�򤧤�.

�i��X�����j
��X�@�Ӿ��,�����T�Ӿ�ƪ��̤j��
(�̫�[�W����) 

�i��X�J�d�ҡj
Sample Input1 :
1 2 3
Sample Output1 :
3

Sample Input2 :
-10 -8 -12
Sample Output2 :
-8
*/ 
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a>=b and a>=c)
	 {cout<< a <<"\n";
	 }
	 else if(b>=c)
	 {cout<< b <<"\n";
	 }
	 else
	 {cout<< c <<"\n";
	 }
   //system("pause");
   return 0;
}


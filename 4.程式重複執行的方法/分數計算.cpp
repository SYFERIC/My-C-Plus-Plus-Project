#include <iostream>
#include <cstdlib>
using namespace std;
/*
���������g�@�ӭp���`�����{���A���רϥΪ̿�J�X�쪺���ơA���ݭn�[�`�A�u�n�ϥΪ̿�J0�N�N���J�����A�ÿ�X�`���C
�d�ҿ�J1:
52
68
75
83
36
0
�d�ҿ�X1:
�`����314��

�d�ҿ�J2:
100
50
75
0
�d�ҿ�X2:
�`����225��
*/ 
int main()
{
	int a,sum;
	cin>>a;
	while(a!=0)
	{
		sum=a+sum;
		cin>>a;
	}
	cout<<"�`����"<<sum<<"��";
	
   //system("pause");
   return 0;
}


#include <iostream>
#include <cstdlib>
using namespace std;
/*
��������X����� N���Ҧ������]�ơC(���פ����ХΪŮ�j�} ) 

���]�ƪ���k:
N ���Ҧ����]�ƽбq 1 2 3  ..... N-1  N  �o N �ӼƸ̭��h�M��C  
�p�G N % 1 == 0  �A ����  1 �N�O  N  ���]��
�p�G N % 2 == 0  �A ����  2 �N�O  N  ���]��
�p�G N % 3 == 0  �A ����  3 �N�O  N  ���]��
........................................
�p�G N % N == 0  �A ����  N �N�O  N  ���]��

��J�d�Ҥ@:
4

��X�d�Ҥ@:
1 2 4

��J�d�ҤG:
12

��X�d�ҤG:
1 2 3 4 6 12
*/ 
int main()
{
	int a,i;
	cin>>a;
	for (i=1 ; i<=a ; i++)
	{
		if(a%i==0)
		cout<<i<<" ";
	}
	
   //system("pause");
   return 0;
}


#include <iostream>
#include <cstdlib>
using namespace std;
/*
��|�Ϋ~���c��\�h�ӫ~�A���P���ӫ~���������ӫ~���X�C
���X 203 ��y�@�� 150��
���X 109 �x�y�@�� 750��
���X 543 �y�Τ@�� 500��
���X 122 �βy��M�@�� 1300��
�w���ӽ�����b�i��q���Ƨ@�~�A�t�Τ����u��d�ߤW�z�ӫ~
�Y�D�W�z���X�N���A�h�t�η|�X�{ �N�X�|���إ�

�ЧA�g�X�@�ӵ{���A�H switch case ���y�k�������@�{���C
�D�حn�D�A�ϥΪ̿�J�N�X( ��ƫ��A ) �A�{���ۦ��X���������~�W�ٻP����( �W�ٻP���椧���Ť@��  )

��J���1:
203
��X���1:
��y 150��

��J���2:
543
��X���2:
�y�� 500��
*/ 
int main()
{
	int a;
	cin>> a; 
	switch(a){
 		case 203:
		cout << "��y 150��";
 		break;
 		case 109:
 		cout << "�x�y 750��";
		break;
		case 543:
 		cout << "�y�� 500��";
		break;
		case 122:
 		cout << "�βy��M 1300��";
		break;
 		default:
 		cout << "�N�X�|���إ�";
 		break;
}
   //system("pause");
   return 0;
}


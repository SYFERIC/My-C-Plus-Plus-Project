#include <iostream>
#include <cstdlib>
using namespace std;
/*
�p�ب��ܳ]�p�@�ӹq���氫�C���A�b�C�����L�{���A�����ϥ���L�Ӱ��H�����ʪ�����
���]�C�����o�C�ӫ��䪺�\��p�U:
W w �W
S s �U
A a ��
D d �k
F f ����
J j ���D
H h ���u

�ЧA�����g�X�{���A���p�ضi����աA�Ш̷ӨϥΪ̿�J���ʧ@����(char ���A)��X�۹������ʧ@��r�C�Y�ϥΪ̿�J���ʧ@����D�W�z�C�ӡA
�h��X�L�İʧ@�C( �j�p�g����A�\��ۦP )
��J���1:
W
��X���1:
�W
��J���2:
d
��X���2:
�k

��J���3:
G
��X���3:
�L�İʧ@
*/ 
int main()
{
	char a;
	cin>> a; 
	if (a=='W' or a=='w')
	cout<<"�W";
	else if(a=='S' or a=='s') 
	cout<<"�U";
	else if(a=='A' or a=='a') 
	cout<<"��";
	else if(a=='D' or a=='d') 
	cout<<"�k";
	else if(a=='F' or a=='f') 
	cout<<"����";
	else if(a=='J' or a=='j') 
	cout<<"���D";
	else if(a=='H' or a=='h') 
	cout<<"���u";
	else 
	cout<<"�L�İʧ@";
   //system("pause");
   return 0;
}


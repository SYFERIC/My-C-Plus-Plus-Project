#include <iostream>
#include <cstdlib>
using namespace std;
/* 
�i���D�ԭz�j
�p�ظ�p���D�Ը�5���]�N����A�p�ر`�V�p����ģ�A�ۤv�i�H�b�X���}���]�N����C
�ƾǤ��n���p���A�`�Oı�o�ۤv����z�C�]���L�`�`�d����3960��A�s�����S����ۤv1�p��2����30��Ӫ��֡A�u�n�C�������p�ت���ģ�C�A�i�H�����L�ѨM�o�Ӱ��D��?
�u�n���L����X�A �p�ت���Ƭ��X�p�ɴX�����X��A�N�i�H���L���D�ۤv�O���٬OĹ�F�C

�i��J�����j
��J���:
3960
�i��X�����j
��X����:
1�p��6��0��

Sample input 1�G
3960
Sample output 1�G
1�p��6��0��

Sample input 2�G
4968
Sample output 2�G
1�p��22��48��
*/ 
int main()
{

	int a,hr,min,sec;
	cin>>a;
	hr=a/3600;
	min=a%3600/60;
	sec=a%60;
	cout<<hr<<"�p��"<<min<<"��"<<sec<<"��" ;
	   //system("pause");
   return 0;
}


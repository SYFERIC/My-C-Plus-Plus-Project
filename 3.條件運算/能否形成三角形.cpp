#include <iostream>
#include <cstdlib>
using namespace std;
/*
�T���Ϊ��T����@�w�n�ŦX����������M�j��ĤT�䪺����C
�ϹL�ӻ��A���A�T�ڤ���A���D�䤤��ڤ�����שM���j��ĤT�ڤ���ɡA���o�T�ڤ���]�@�w����@�ӤT���ΡC
 
�ЧA�g�ӵ{���P�_�@�U�A���A�T�ڤ���A���פ��O��a�Bb�Bc�ɡA�o�T�ڤ���ण������@�ӤT���ΡC
��J����
�T�Ӿ��a�Bb�Bc

��X����
�Y�o�T�ڤ����զ��T���ΡA�N��XYes�A�_�h��XNo

input 1
3 5 3
output 1
Yes
input 2
5 2 2
output 2
No
*/ 
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>c and b+c>a and  a+c>b)
	 {cout<<"Yes\n";
	 }
	 else
	 {cout<<"No\n";
	 }
   //system("pause");
   return 0;
}


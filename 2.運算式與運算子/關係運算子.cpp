#include <iostream>
#include <cstdlib>
using namespace std;
/*
�j��>
�p��<
����==
�j�󵥩�>=
�p�󵥩�<=
������ !=
*********************************************
�W�z�k����C++ ���A���Y�B��l����ܪk

�Y��ƪ��j�p���Y�O���T���A
�h�H cout ���O�N������Y��X�A
�N�|��� 1
=====================
�Y��ƪ��j�p���Y�O���~���A
�h�H cout ���O�N������Y��X�A
�N�|��� 0

����:
cout<<(5>3);
��X���G�� 1

cout<<(8<4);
��X���G�� 0

cout<<(5>=5);
��X���G�� 1

�@�~����:
���N��J��Ӿ�ơA�ñN���G�ƪ��j�p���Y�̫��w�榡��X

��J:
8 2

��X:
8>2 the result is 1
8==2 the result is 0
8<2 the result is 0
8!=2 the result is 1
*/ 
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<a<<">"<<b<<" the result is "<<(a>b)<<"\n";
	cout<<a<<"=="<<b<<" the result is "<<(a==b)<<"\n";
	cout<<a<<"<"<<b<<" the result is "<<(a<b)<<"\n";
	cout<<a<<"!="<<b<<" the result is "<<(a!=b)<<"\n";

   //system("pause");
   return 0;
}


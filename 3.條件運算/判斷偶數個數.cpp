#include <iostream>
#include <cstdlib>
using namespace std;
/*
���ܳ��w���ơA�L�Ʀܦ��������ƪ��ߺD�C
�A���L�@�ӽd�򪺳s���ơA�L�N�|��䤤�����Ưd�U�Ӧ��áC
�p���L�S����F�@�ӽd�򪺾�ơA�аݥL�o�����äF�X�Ӱ��ơH
����ӻ��A0 �]��O�@�Ӱ��Ʈ@�I

��J����
��J�u���@��A�䤤�t����ӥѪťչj�}����� a, b (0 ? a ? b ? 2147483647)�C
��X����
��X�@�Ӿ�ơA�N�� a �P b ���� (�t a �P b) �@�@���h�֭Ӱ��ơC

�d�ҿ�J
1 4
�d�ҿ�X
2
*/ 
int main()
{
	int a,b;
	cin>>a>>b;
	if (a%2==1 and b%2==1)
	cout<<(b-a)/2;
	else if (a%2==0 and b%2==0)
	cout<<((b-a)/2)+1;
	else
	cout<<(b-a+1)/2;
   //system("pause");
   return 0;
}


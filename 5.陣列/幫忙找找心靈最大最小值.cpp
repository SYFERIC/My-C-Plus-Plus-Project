#include <iostream>
#include <cstdlib>
using namespace std;
/*
���`�ǥ�
�ھڭ^���s��ܡA�Ѯv�`�`�|�O�o�Z�W��{�̦n�M��{�̮t���ǥ͡C
�b21xx�~�A�w�g�������i�H�p��ǥͺ�X��{�ƭȡA�٤������F�ƭȡC�C
�{�b���A�@��ӯZ�����F�ƭȡA�ЧA��X�̦n�ǥ͡B�̮t�ǥͪ����F�ƭȤ��O�O�h�֡C
��J����
�Ĥ@�C�G �@�Ӿ��N�A�N��Z�W���X�W�ǥ͡C1 <= N <= 100
�ĤG�C�G N�Ӿ�ơA�N��C��ǥͪ����F�ƭȡC1 <= ���F�ƭ� <= 10000�C
��X����
�@�@�C�G��Ӿ�ƥH�ťչj�}�A���O���̤j�B�̤p�����F�ƭȡC
input1
10
2715 862 2513 5971 2395 9626 7339 9915 8993 3098
Output1
9915 862
Input2
20
2764 1016 8332 6473 3273 2991 1258 8774 4523 9181 9492 2092 1995 7879 1578 2444 9528 3197 7885 5744
Output2
9528 1016

*/ 
int main()
{
	int n,i,max=0,min=100000;
	cin>>n;
	int s[n+1];
	for (i=1;i<=n;i++)
	{
		cin>>s[i];
		if(s[i]>=max)
		max=s[i];
		if(s[i]<=min)
		min=s[i];
	}
	cout<<max<<" "<<min;

   //system("pause");
   return 0;
}


#include <iostream>
#include <cstdlib>
using namespace std;
/*
�i���D�y�z�j
�������P�_��J���~���O�_���|�~�C
�p�G�O�A �п�X LEAP! 
�p�G���O�A �п�X NOT LEAP! 

�i��J�����j
��J���@�Ӿ��,�N��~��

�i��X�����j
��X��"LEAP!" �� "NOT LEAP!"
�Բӿ�X�аѦ�Sample Output

�|�~�W�h�p�U�G
1.�褸�~�����H400�i�㰣�A���|�~�C
2.�褸�~�����H4�i�㰣�åB���H100���i�㰣�A���|�~�C
3.�褸�~�����H4���i�㰣�A�����~�C
4.�褸�~�����H100�i�㰣�åB���H400���i�㰣�A�����~
�i��X�J�d�ҡj

Sample Input1 :
2000
Sample Output1 :
LEAP!

Sample Input2 :
300
Sample Output2 :
NOT LEAP! 
*/ 
int main()
{
	int a;
	cin>>a;
	if(a%400==0)
	 {cout<<"LEAP! \n";
	 }
	 else if(a%100 ==0)
	  {cout<<"NOT LEAP! \n";
	 }
	 else if(a%4==0)
	 {cout<<"LEAP!\n";
	 }
	 else
	 {cout<<"NOT LEAP! \n";
	 }
   //system("pause");
   return 0;
}


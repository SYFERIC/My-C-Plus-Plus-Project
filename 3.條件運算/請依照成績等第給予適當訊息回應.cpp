#include <iostream>
#include <cstdlib>
using namespace std;
/*
���Ѯv�������Ƶ��Ķ˸����A�����L�g�ӵ{���A�̷ӦP�Ǫ����Ƶ��A�����ġC
���Ƭ�100�������y��
Excellent!
���Ƥj�󵥩�90�������y��
A!
���Ƥj�󵥩�80�������y��
B!
���Ƥj�󵥩�70�������y��
C!
���Ƥj�󵥩�60�������y��
D!
���Ƥp��60�������y��
F!
��J���1:
100
��X���1:
Excellent!
��J���2:
89
��X���2:
B!
*/ 
int main()
{	
	int a;
	cin>>a;
	if(a==100)
	cout<<"Excellent!";
	else if(a<100 and a>=90)
	cout<<"A!";
	else if(a<90 and a>=80)
	cout<<"B!";
	else if(a<80 and a>=70)
	cout<<"C!";
	else if(a<70 and a>=60)
	cout<<"D!";
	else if(a<60)
	cout<<"F!";	
	return 0;
}


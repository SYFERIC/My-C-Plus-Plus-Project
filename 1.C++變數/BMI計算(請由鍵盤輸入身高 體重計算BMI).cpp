#include <iostream>
#include <cstdlib>
using namespace std;
/*�п�J����(����)�魫(����)(�����魫�i�H���p���I)�A�íp��BMI(  BMI= �魫 /(����)2 (Kg/ m2)  )  ���ȡC
�Ҧp:
��J���� 
170 70
��X����
BMI=24.2215
*/ 
int main()
{

	float height, weight;
	cin>> height>> weight;
	cout<<"BMI="<< weight/height/height*10000;
	return 0;
}


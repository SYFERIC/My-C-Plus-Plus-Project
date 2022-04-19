#include <iostream>
#include <cstdlib>
using namespace std;
/*請輸入身高(公分)體重(公斤)(身高體重可以有小數點)，並計算BMI(  BMI= 體重 /(身高)2 (Kg/ m2)  )  的值。
例如:
輸入部分 
170 70
輸出部分
BMI=24.2215
*/ 
int main()
{

	float height, weight;
	cin>> height>> weight;
	cout<<"BMI="<< weight/height/height*10000;
	return 0;
}


#include <iostream>
#include <cstdlib>
using namespace std;
/* 
給你a, b, c及X，請你算出aX2+bX+c的值
輸入說明
題目有多筆輸入
每一列: 四個整數 a, b, c, X
輸出說明
對每一列輸出 ans=aX2+bX+c

input
1 2 3 4
0 0 100 20
1 0 0 11

output
ans=27
ans=100
ans=121
*/ 
int main()
{
	int a,b,c,x;

	while(cin>>a>>b>>c>>x)
	cout<<"ans="<<a*x*x+b*x+c<<"\n";



   return 0;
    
}


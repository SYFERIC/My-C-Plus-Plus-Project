#include <iostream>
#include <cstdlib>
using namespace std;
/*
輸入兩個正整數A、B
若A是B的倍數，請輸出1；否則輸出0。

[提示]
取餘數運算子%

[範例輸入]
15 5

[範例輸出]
1
*/ 
int main()
{

	int a,b;
	cin>>a>>b;
	(a%b==0)?cout<<"1 \n":cout<<"0 \n";
   

   //system("pause");
   return 0;
}


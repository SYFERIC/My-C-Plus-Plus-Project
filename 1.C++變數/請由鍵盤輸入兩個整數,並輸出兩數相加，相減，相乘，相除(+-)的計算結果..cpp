#include <iostream>
#include <cstdlib>
using namespace std;
/*
 例如:
輸入部分
5 4

輸出結果
5+4=9
5-4=1
5*4=20
5/4=1
*/ 

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<a<<"+"<<b<<"="<<a+b<<"\n";
    cout<<a<<"-"<<b<<"="<<a-b<<"\n";
	cout<<a<<"*"<<b<<"="<<a*b<<"\n";
	cout<<a<<"/"<<b<<"="<<a/b<<"\n";

   //system("pause");
   return 0;
}


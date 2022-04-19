#include <iostream>
#include <cstdlib>
using namespace std;
/*
叫腊Γтタ俱计 Nい┮Τタ计(氮い丁叫ノ筳秨 ) 

タ计т猭:
N ┮Τタ计叫眖 1 2 3  ..... N-1  N  硂 N 计柑碝т  
狦 N % 1 == 0   ê或  1 碞琌  N  计
狦 N % 2 == 0   ê或  2 碞琌  N  计
狦 N % 3 == 0   ê或  3 碞琌  N  计
........................................
狦 N % N == 0   ê或  N 碞琌  N  计

块絛ㄒ:
4

块絛ㄒ:
1 2 4

块絛ㄒ:
12

块絛ㄒ:
1 2 3 4 6 12
*/ 
int main()
{
	int a,i;
	cin>>a;
	for (i=1 ; i<=a ; i++)
	{
		if(a%i==0)
		cout<<i<<" ";
	}
	
   //system("pause");
   return 0;
}


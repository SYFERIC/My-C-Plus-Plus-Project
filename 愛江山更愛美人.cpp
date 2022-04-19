#include <iostream>
#include <cstdlib>
#include <windows.h>
void x()//休止半拍 
{Beep(0,350);
}
void qd()//do四分之一拍 
{Beep(523,175);
}
void qr()//re四分之一拍 
{Beep(587,175);
}
void ls()//低音so半拍 
{Beep(392,350);
}
void ll()//低音la半拍 
{Beep(440,350);
}
void d() //do半拍 
{Beep(523,350);
}
void r()//re半拍 
{Beep(587,350);
}
void m()//mi半拍 
{Beep(689,350);
}
void s()//so半拍 
{Beep(784,350);
}
void l()//la半拍 
{Beep(880,350);
}
void t()//si半拍 
{Beep(988,350);
}
void hd()//高音do半拍 
{Beep(1060,350);
}
void lL()//低音la一拍 
{Beep(440,700);
}
void D()//do一拍 
{Beep(523,700);
}
void R()//re一拍 
{Beep(587,700);
}
void M()//mi一拍 
{Beep(689,700);
}
void S()//so一拍 
{Beep(784,700);
}
void L()//la一拍 
{Beep(880,700);
}
void Ll()//la一個半拍 
{Beep(880,1050);
}
void Mm()//mi一個半拍 
{Beep(689,1400);
}
void Ss()//so一個半拍 
{Beep(784,1050);
}
void lLL()//低音la兩拍 
{Beep(440,1050);
}
void RR()//re兩拍 
{Beep(587,1400);
}
void MM()//mi兩拍 
{Beep(689,1400);
}
void SS()//so兩拍 
{Beep(784,1400);
}
void LL()//la兩拍 
{Beep(880,1400);
}
void DDD()//do三拍 
{Beep(523,2100);
}
void RRR()//re三拍 
{Beep(587,2100);
}
void SSS()//so三拍 
{Beep(784,2100);
}

using namespace std;
int main()
{
	cout<<"愛江山更愛美人 試聽 \n";   
	 system("pause");
   ls();ll();d();d();d();r();D();  r();m();s();s();s();l();SS();  l();l();l();hd();Ll();m();SSS(); 
   /*道不盡紅塵奢戀　訴不完人間恩怨　世世代代都是緣*/
   m();s();l();L();hd();L();  s();m();s();S();l();M();  m();r();r();d();r();M();d();RRR();
   /*留著相同的血　喝著相同的水　這條路漫漫又長遠*/
   ls();ll();d();d();d();r();D();  r();m();s();s();s();l();SS();  l();l();l();hd();Ll();m();SSS();
   /*紅花當然配綠葉　這一輩子誰來陪　渺渺茫茫來又回*/
   m();s();l();L();hd();L();  s();m();s();S();l();M();  m();r();r();d();r();M();r();DDD();
   /*往日情景再浮現　藕雖斷了絲還連　輕嘆世間事多變遷*/
   d();r();MM();x();s();s();m();qr();qd();ll();lLL();  d();r();Mm();r();m();r();m();s();l();Ss();S();
   /*愛江山　更愛美人　哪個英雄好漢寧願孤單*/ 
   m();s();LL();hd();hd();l();s();Mm();M();x();  m();R();r();d();r();d();d();l();SSS(); 
   /*好兒郎　渾身是膽　壯志豪情四海遠名揚*/
   ls();ll();d();ll();ls();ll();Ss();m();l();t();l();s();MM();  l();t();l();s();m();S();d();ll();d();r();m();RR(); 
   /*人生短短幾個秋　不醉不罷休 東邊我的美人哪　西邊黃河流*/
   d();r();d();ll();ls();S();M();l();t();l();s();MM();  l();t();l();s();m();lL();m();DDD(); 
   /*來呀來個酒啊　不醉不罷休 愁情煩事別放心頭*/
   system("pause");
   return 0;
}

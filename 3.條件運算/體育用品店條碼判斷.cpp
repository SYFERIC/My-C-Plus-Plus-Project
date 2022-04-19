#include <iostream>
#include <cstdlib>
using namespace std;
/*
體育用品店販售許多商品，不同的商品有對應的商品條碼。
條碼 203 桌球一盒 150元
條碼 109 籃球一顆 750元
條碼 543 球棒一隻 500元
條碼 122 棒球手套一個 1300元
已知該賣場正在進行電腦化作業，系統內部只能查詢上述商品
若非上述條碼代號，則系統會出現 代碼尚未建立

請你寫出一個程式，以 switch case 的語法完成此一程式。
題目要求，使用者輸入代碼( 整數型態 ) ，程式自行輸出對應的物品名稱與價格( 名稱與價格之間空一格  )

輸入資料1:
203
輸出資料1:
桌球 150元

輸入資料2:
543
輸出資料2:
球棒 500元
*/ 
int main()
{
	int a;
	cin>> a; 
	switch(a){
 		case 203:
		cout << "桌球 150元";
 		break;
 		case 109:
 		cout << "籃球 750元";
		break;
		case 543:
 		cout << "球棒 500元";
		break;
		case 122:
 		cout << "棒球手套 1300元";
		break;
 		default:
 		cout << "代碼尚未建立";
 		break;
}
   //system("pause");
   return 0;
}


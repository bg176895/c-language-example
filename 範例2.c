//FileName： test.c
#include <stdio.h>
#include <stdlib.h>
double get_TG(double a);/*宣告一公斤轉換多少台斤的函數*/ 
int main(){
	register int a;/*宣告整數型態之暫存器變數*/
	for(a=1;a<101;a++)/*計算1~100公斤所對應之台斤數*/ 
	printf("%d公斤\t=%f台斤\n",a,get_TG(a));
	//system("pause");
	getch();
return 0;
}
double get_TG(double a){
	double b;/*宣告雙精確浮點數*/
	b=a*5/3;
	return(b);
}

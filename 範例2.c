//FileName�G test.c
#include <stdio.h>
#include <stdlib.h>
double get_TG(double a);/*�ŧi�@�����ഫ�h�֥x�窺���*/ 
int main(){
	register int a;/*�ŧi��ƫ��A���Ȧs���ܼ�*/
	for(a=1;a<101;a++)/*�p��1~100����ҹ������x���*/ 
	printf("%d����\t=%f�x��\n",a,get_TG(a));
	//system("pause");
	getch();
return 0;
}
double get_TG(double a){
	double b;/*�ŧi����T�B�I��*/
	b=a*5/3;
	return(b);
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	float c,d; 
	printf("請輸入兩個整數數字\n");
	scanf("%d %d",&a,&b);
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("a+b=%d\n",a+b);
	printf("a-b=%d\n",a-b);
	printf("a*b=%d\n",a*b);
	printf("a％b=%d\n",a%b);
	printf("a/b=%f\n\n\n",(float)a/b);
	printf("請輸入身高(公尺)\n");
	scanf("%f",&c);
	printf("請輸入體重(公斤)\n");
	scanf("%f",&d);
	printf("BMI=%.2f\n",d/(c*c));
	
    system("pause");
	return 0;
}

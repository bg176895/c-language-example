#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	float c,d; 
	printf("�п�J��Ӿ�ƼƦr\n");
	scanf("%d %d",&a,&b);
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("a+b=%d\n",a+b);
	printf("a-b=%d\n",a-b);
	printf("a*b=%d\n",a*b);
	printf("a�Hb=%d\n",a%b);
	printf("a/b=%f\n\n\n",(float)a/b);
	printf("�п�J����(����)\n");
	scanf("%f",&c);
	printf("�п�J�魫(����)\n");
	scanf("%f",&d);
	printf("BMI=%.2f\n",d/(c*c));
	
    system("pause");
	return 0;
}

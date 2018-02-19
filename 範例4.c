#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a,b;
   printf("請輸入一個整數:\n");
   scanf("%d",&b);
   a=b%2;
   switch(a)
   {
   case 0:
       { 
		  printf("%d是偶數\n",b);
	   }
		
   case 1:
	   {
	      printf("%d是奇數\n",b);
	   }
	
   default:
	   {
	      printf("輸入錯誤\n");
	   }
	   
   }   
	   system("pause");
	   return 0;
   }

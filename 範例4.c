#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a,b;
   printf("�п�J�@�Ӿ��:\n");
   scanf("%d",&b);
   a=b%2;
   switch(a)
   {
   case 0:
       { 
		  printf("%d�O����\n",b);
	   }
		
   case 1:
	   {
	      printf("%d�O�_��\n",b);
	   }
	
   default:
	   {
	      printf("��J���~\n");
	   }
	   
   }   
	   system("pause");
	   return 0;
   }

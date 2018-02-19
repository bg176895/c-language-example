#include <stdio.h>
#include <stdlib.h>

int main()
{
    char myString[10];
    char myString_1[10];
    int b[1000];
    char *myString_ptr;


    myString[0] = 'H';
    myString[1] = 'e';
    myString[2] = 'l';
    myString[3] = 'l';
    myString[4] = 'o';
    myString[5] = '!';
    myString[6] = '\0';

//    myString_1 = myString;
    strcpy(myString_1, myString);
    printf("myString = %s \n", myString);
    printf("myString_1 = %s \n", myString_1);
    printf("************\n");

    myString_ptr = (char *) calloc(10, sizeof(char));
    strcpy(myString_ptr, myString);
    printf("myString = %s \n", myString);
    printf("myString_ptr = %s \n", myString_ptr);
    printf("************\n");
	system("pause");
    return 0;
}

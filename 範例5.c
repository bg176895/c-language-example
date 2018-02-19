#include <stdio.h>
#include <stdlib.h>
 main()
{
   char h[9999];    /*char 字元宣告(c語言中沒有字串的變數型態(c++中有string)，故以字元陣列形式來儲存字串)*/
  while(gets(h)!=EOF){   
    printf("hello, %s\n",h);
    }
    return 0;
}

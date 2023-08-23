#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int i;
    scanf("%d\n%d", &a, &b);
    char arr[][9] = {"one", "two" , "three", "four" , "five" , "six" , "seven" , "eight" , "nine" };
  	for(i=a;i<b+1;++i)
      {
          if(i<10)
          {
              printf("%s\n", arr[i-1]);
          }
          else if (i%2==0)
          {
              printf("even\n");
          }
          else {
          printf("odd\n");
          }
      }

    return 0;
}

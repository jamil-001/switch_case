#include <stdio.h>
int main ()
{
   char input;
   printf("Enter your color code like alphabate:\n");
   scanf("%c",&input);
   switch(input){
       case 'W':
       case 'w':
       printf("This number is white\n");
       break;
       case 'R':
       case 'r':
       printf("This color is red\n");
       break;
       case 'B':
       case 'b':
       printf("This color is blue\n");
       break;
       case 'G':
       case 'g':
       printf("This color is green\n");
       break;
       default:
        printf("Not found\n");
   }

return 0;
}

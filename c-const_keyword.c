#include <stdio.h>

int main()
{
   const int LENGTH = 10;

   const int WIDTH = 500;
   const char NEWLINE = '\n';
   int area;

   area = LENGTH * WIDTH;
   printf("Note that it is a good programming practice to define constants in CAPITALS.\n");
   printf("value of area : %d", area);
   printf("%c", NEWLINE);

   return 0;
}
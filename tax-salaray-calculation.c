#include <stdio.h>

int main()
{
   /* my first program in C */
   /* Resident = ???????? | ?????????????????????  */
   /* Non-Resident = ????????? | ???????????????????????  */

   char operator;
   double n1, n2;

//   printf("Resident\n");
//   printf("Non-Resident\n");
   printf("***Tax Salary Calcuation for Cambodia***\n");
   printf("Enter R or N (R: Resident, N: Non-Resident): ");
   scanf("%c", &operator);
//   printf("Enter two operands: ");
//   scanf("%lf %lf", &n1, &n2);

   switch (operator)
   {
   case 'R':
//      printf("%.1lf + %.1lf = %.1lf", n1, n2, n1 + n2);
		printf("R"); 
//      	printf("%.1lf + %.1lf = %.1lf", n1, n2, n1 + n2);
      break;

   case 'N':
//      printf("%.1lf - %.1lf = %.1lf", n1, n2, n1 - n2);
      printf("NR"); 
      break;

   // operator doesn't match any case constant +, -, *, /
   default:
      printf("Error! operator is not correct");
   }

   return 0;
}


#include <stdio.h>
#include <conio.h>
int main()
{
   int x, y; 
   int product = 0; 
   printf("Enter two integers:\n");
   scanf("%d%d", &x, &y); 
   while(y != 0)
   {
      product += x;
      y--;
   }
   printf("\nProuduct = %d\n", product);
   return 0;
   getch();
}

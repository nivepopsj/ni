#include<stdio.h>
#include<conio.h>
 int main()
{
    int a[2], odd;
    printf("Enter the two numbers");
    for(int i = 0; i < 2; i++)
    {
        scanf("%d",&a[i]);
        if(!(a[i]%2 == 0) && a[i] % 7 == 0)
           odd++;
    }
    printf ("Number of odd %d", odd);
    return 0;
    getch();
   
}

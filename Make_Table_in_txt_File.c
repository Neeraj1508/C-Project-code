#include<stdio.h>

int main()
{
    FILE *ptr;
    int i, x = 1;
    printf("Enter the Integer of table which you need\n");
    scanf("%d",&i);
    int mul;
    ptr = fopen("Practice gen.txt", "w");
    while (x < 11)
    {
        mul = i*x;
        fprintf(ptr,"%d * %d = %d\n",i , x, mul);
        x++;
    }
    fclose(ptr);
    printf("Done\n");
    printf("Now Go and check The txt file of name Practice gen.txt for table\n");
    return 0;
}
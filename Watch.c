#include <stdio.h>
#include <windows.h>

int main()
{
    int h, m, s;
    int d = 1000; //adding delay of 1000 milliesecond and we will use in sleep function
    printf("Enter the time in Format h : m : s\n");
    scanf("%d %d %d", &h, &m, &s);
    if (h > 12 || m > 60 || s > 60)
    {
        printf("ERROR ! \n");
        exit(0);
    }
    while (1) //this is an infinite loop
    {
        s++;
        if (s > 59)
        {
            m++;
            s = 0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12)
        {
            h=1;
        }
        printf("\n Clock :");
        printf("\n %02d:%02d:%02d",h,m,s);//this the format of our time
        Sleep(d); //this functio slows down the the while loop and make it more real clock

        system("cls"); //for clear the screen
    }
}
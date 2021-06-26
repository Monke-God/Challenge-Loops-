#include <stdio.h>

int main()
{
    int n;
    printf("Input the number of stairs you want\n");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) //repeats n times for number of stairs
    {
        for (int j = 0; j < i; j++) //repats i times for ith stair
        {
            printf("01"); //basic unit that is to be printed and repeated i times for ith stair till n stairs
        }
        printf(" "); //space between the two stairs
    }

    return 0;
}

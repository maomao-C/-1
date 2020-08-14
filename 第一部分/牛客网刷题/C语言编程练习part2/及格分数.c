#include <stdio.h>
int main()
{
    int grade;
    while(scanf("%d",&grade) == 1)
    {
        if(grade >= 60)
            printf("Pass\n");
        else
            printf("Fail\n");
    }
    return 0;
}

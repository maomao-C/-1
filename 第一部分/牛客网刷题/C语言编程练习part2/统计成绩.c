#include<stdio.h>
int main()
{
    int n,i;
    float sum=0,max=0,min=100,x,avg=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%f",&x);
        if(x<min) min=x;
        if(x>max) max=x;
        sum=sum+x;
    }
    avg=sum/n;
        printf("%.2f %.2f %.2f\n",max,min,avg);
    return 0;
}

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%2==0)
        printf("%d %d",n/2,n/2);
    else
        printf("%d %d",n/2+1,n/2);
    return 0;
}

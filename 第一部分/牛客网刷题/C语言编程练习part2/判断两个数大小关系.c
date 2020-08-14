#include<iostream>
using namespace std;
int main(){
int a,b;
char x;
while(cin>>a>>b){
if(a>b)
x='>';
else if(a<b)
x='<';
else
x='=';
printf("%d%c%d\n",a,x,b);
}
return 0;
}

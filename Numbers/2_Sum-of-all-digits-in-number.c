#include<stdio.h>
int main(){
    int a,i,sum=0;
printf("Enter Number- ");
scanf("%d",&a);
while(a>0){
    int div = a%10;
    sum = sum + div;
    a=a/10;
}
printf("%d",sum);
return 0;
}

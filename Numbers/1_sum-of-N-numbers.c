#include<stdio.h>
int main(){
    int a,i,sum=0;
printf("Enter Total Number you want to Sum - ");
scanf("%d",&a);
for(i=1;i<=a;i++){
    sum=sum+i;
    printf("Sum = %d\n",sum);
}
return 0;
}

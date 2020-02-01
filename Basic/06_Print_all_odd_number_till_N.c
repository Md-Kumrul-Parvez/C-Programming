#include<stdio.h>
int main(){
int i,n;
printf("Enter Your Number > ");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
    if(i%2!=0)
    {
        printf("%d",i);
    }
    else
        continue;
}
return 0;
}

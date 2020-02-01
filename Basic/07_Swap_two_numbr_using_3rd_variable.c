#include<stdio.h>
int main(){
int var1,var2,var3;
printf("Enter 1st Variable > ");
scanf("%d",& var1);
printf("\nEnter 2nd Variable > ");
scanf("%d",& var2);
printf("\nNow var1 = %d and var2 = %d",var1,var2);
var3=var1;
var1=var2;
var2=var3;
printf("\nAfter Swap var1 = %d and var2 = %d\n",var1,var2);
return 0;
}

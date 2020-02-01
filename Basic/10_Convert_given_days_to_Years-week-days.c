#include<stdio.h>
int main(){
int nodays;
printf("Enter Days > ");
scanf("%d",& nodays);
int years = nodays/365;
int weeks = (nodays%365)/7;
int days = (nodays%365)%7;
printf("\n%d days => Years=%d and Weeks=%d and Days=%d\n",nodays,years,weeks,days);
return 0;
}

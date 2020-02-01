#include<stdio.h>
int main(){
int f,F,m,Mgender,salary,gender;
float bonus;
printf("Enter F for Female and M for Male > ");
scanf("%c",& gender);
printf("\nEnter Salary > ");
scanf("%d",& salary);
if((gender==f)||(gender==F)){
   bonus = (salary*.05);
   }
   else{
    bonus = (salary*.1);
   }
float total = (salary+bonus);
printf("Total Salary with Bonus = %.2f\n",total);
return 0;
}

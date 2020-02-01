#include<stdio.h>
int main(){
int year;
printf("Enter Year > ");
scanf("%d",& year);
if(year%400==0){
    printf("\n%d is Leap Year\n",year);
}
else if(year%100==0){
    printf("\n%d is Not Leap Year\n",year);
}
else if(year%4==0){
    printf("\n%d is Leap Year\n",year);
}
else{
    printf("\n%d is Not Leap Year\n",year);
}
return 0;
}

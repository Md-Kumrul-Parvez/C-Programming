#include<stdio.h>
int main(){
int a,b,i,z=0;
scanf("%d%d",&a,&b);
if((a<0)&&(b<0)){
    a=a+b;
    b=a-b;
    a=a-b;
    for(i=1;i<=b;i++){
    z=z+a;
}
}
else if(b<0){
   for(i=b;i<0;i++){
    z=z+a;
}
}
else{
   for(i=1;i<=b;i++){
    z=z+a;
}
}
printf("Multiplication = %d",z);
return 0;
}

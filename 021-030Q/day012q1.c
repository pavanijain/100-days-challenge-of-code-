#include<stdio.h>
int main (){
    int a;
    scanf("%d",&a);
    if(a<=5){
        printf("Fine ₹%d\n",a*2);
    }else if (a<=10){
        printf("Fine ₹%d\n",10+(a-5)*4);
    }else if(a<=30){
        printf("Fine ₹%d\n",30+(a-10)*6);
    }else{
        printf("Membership Cancelled.\n");
    }
    return 0;
}
/* Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit */

#include<stdio.h>

int main(){
    int a;
    scanf("%i",&a);

    if(a<=100){
        printf("Bill: ₹%i\n",a*5);
    }else if(a<=200){
        printf("Bill: ₹%i\n",500+(a-100)*7);
    }else if(a<=300){
        printf("Bill: ₹%i\n",500+700+(a-200)*10);
    }else{
        printf("Bill: ₹%i\n",500+700+1000+(a-300)*12);
    }
    return 0;
}
//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>

int main (){
    printf("Enter side of triangles: ");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if(a+b>c&&b+c>a&&c+a>b){
        if(a==b&&b==c&&c==a){
            printf("Equilateral\n");
        }else if(a==b||b==c||c==a){
            printf("Isoceles\n");
        }else{
            printf("Scalene\n");
        }
    }else{
        printf("Given values do not form sides of a triangle.\n");
    }
    return 0;
}
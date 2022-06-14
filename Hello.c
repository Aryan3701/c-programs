#include<stdio.h>

int main(){
    int a;
    int b;
    printf("enter the side");
    scanf("%d", &a);
    /*here we have taken the area of the square 
    in area variable using a as side of square*/
    int area=a*a;
    printf("area is %d \n",area);
    //program for cube of a varible
    printf("enter the no for cube");
    scanf("%d", &b);
    printf("the cube is %d", a*a*a);
}
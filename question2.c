#include<stdio.h>\

int integer;
float flt;
float proxy;

int main (){
    
    printf("Enter the Integer : \n");
    scanf("%d",&integer);
    printf("No Enter the float : \n");
    scanf("%f",&flt);

    proxy = flt;
    flt = (float) integer;
    integer = (int) proxy;

    printf("We have succesfully swaped the numbers as new float is %f and new integer is %d",flt,integer);

    return 0;
}
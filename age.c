#include<stdio.h>
void main()
{
    int age;
    
    printf("enter your age");
    scanf("%d",&age);
    printf("are you %d ?",age);
}
#include<stdio.h>
void main(){
    int num1,num2;
    printf("enter two numbers:");
    scanf(" %d %d",&num1,&num2);
    printf("addition = %d \n",num1+num2);
    printf("subtraction = %d \n",num1-num2);
    
}
#include<stdio.h>
void main()
{
    int num1 ,num2;
    printf("multiple and subtract:");
    scanf("%d%d",&num1,&num2);
    printf("%d*%d=%d\n",num1,num2,num1*num2);
    printf("%d/%d=%d",num1,num2,num1/num2);
}
#include<stdio.h>
void main()
{
    int num1;
    printf("enter a number:");
    scanf("%d",&num1);
    printf("square of %d is %d\n",num1,num1*num1);
    printf("cubes of %d is %d",num1,num1*num1*num1);
}

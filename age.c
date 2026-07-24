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

#include<stdio.h>
void main()
{
    int s;
    printf("enter number:");
    scanf("%d",&s);
    printf("area of square:%d\n",s*s);
    printf("perimeter of square:%d",4*s);
} 

#include<stdio.h>
void main()
{
    int r;
    printf("enter number:");
    scanf("%d",&r);
    printf("circumference:%d\n",2*22/7*r);
} 

#include<stdio.h>
void main()
{
    int r;
    printf("eneter num:");
    scanf("%d",&r);
    printf("area of sphere=%d",4*22/7*r*r);
}

#include<stdio.h>
void main()
{
    float cost_price=3.25;
    float selling_price=4.15;
    float liters=4.0;
    float water_liters=1.0;
    float total_liters=liters+water_liters;
    float total=selling_price*total_liters;
    float bfr_add=cost_price*liters;
    float gain=total-bfr_add;
    printf("gain of milk vendor= %.2f",gain);
    
}
functions
#include<stdio.h>
void greet()
{
    printf("welcome to fantasy function");
}
void main()
{
    greet();
}

#include<stdio.h>
int sum()
{
    int a,b,c;
    printf("enter no:");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("sum=%d",c);
}
int main()
{
    sum();
    return 0;
}
#include <stdio.h>
int add(int a,int b)
{
 int c=a+b;
 return c;
}
int main()
{
    int x=5,y=6;
    int result=add(x,y);
    printf("value of c %d",result);
    return 0;
}

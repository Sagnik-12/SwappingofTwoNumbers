//Program to swap two numbers without using temporary variable
#include<stdio.h>
int main()
{
   int a,b;
   printf("Enter the value of a: ");
   scanf("%d",&a);
   printf("Enter the value of b: ");
   scanf("%d",&b);
   a=a+b;// a gets the value of a+b
   b=a-b;// b is subtracted from a+b which basically gives intital value of a
   a=a-b;// updated value of b is now subtracted from a+b to give initial value of b
   printf("Numbers after swapping are a=%d,b=%d",a,b);
   return 0;
}

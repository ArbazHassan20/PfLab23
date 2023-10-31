/*
name: Arbaz Hassan Narejo
ID:22k-4031
Date:31/10/23
Description:function for finding product of 2 numbers without using multiplication operator and
loops.Use recursion and addition only.
*/
#include <stdio.h>
int multiply(int a, int b) {
if(b==0) {
//base case
   return 0;
} else if(b>0) {
//recursive case
        return a+multiply(a,b-1);
} else {
//dealing with neg numbers
   return -multiply(a, -b);
}
}

main() {
int a,b,product;
printf("enter num 1:");
scanf("%d",&a);
printf("enter num 2:");
scanf("%d",&b);

//calling the function
product = multiply(a,b);

printf("the product is:%d",product);

}

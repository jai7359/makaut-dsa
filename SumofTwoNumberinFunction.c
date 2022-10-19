#include<stdio.h>
//sum is a function which takes a and b as input and return as interger as an output ;//
int sum(int a , int b);
int main()
{
    int c;
    c = sum(2,100);
    printf("the value of c is %d\n",c);
    return 0;
}
int sum(int a,int b){
    int result;
    result = a + b;
    return result;
}
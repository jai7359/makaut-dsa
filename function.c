#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main(){
    goodmorning();
    return 0;
}
void goodmorning(){
    printf("good morning jp\n");
    goodafternoon();
}
void goodafternoon(){
    printf("good afternoon jp\n"); 
    goodnight();
}void goodnight(){
    printf("good night jp\n");
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1;
    do{
        printf("guess the number btw 1 to 100 : ");
        scanf("%d",&guess);
        printf("you should type ->\t");
        if(guess>number){
            printf("lower number pls\n");
        }
        else if(guess<number){
            printf("higher number pls\n");
        }
        else{
            printf("you guess it in %d attemped",nguesses);
        }
        nguesses++;
    }
    while (guess!=number);
    return 0;

}
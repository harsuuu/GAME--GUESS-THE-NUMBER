#include<stdio.h>
#include<stdlib.h>  //rand() fuction hme warning dega isliye is header file ko lgana hoga
#include<time.h>   //qki hme time lgaya hai isme isliye time ki header file lgani pdegi

int main(){
    int number,guess,nguesses=1;
    srand(time(0));   // jo rand() hai bo number generate to krta hia lekin same number hi generate krta hai isliye hme "srand(time(0))" lgana pdega jisse ye hme every 0 second new number dega.
    number = rand()%100 +1;  // ye "rand()" hme random number generate krke dega lekin ye bar bar same number generate krke dega.
    
    // agr hm simple rand() use krenge to ye random function hme kitna bhi n=random number de dega lekin agr hm chahte ki random number 0 to 100 aaye to hm aise likh denge "rand()%100" and agr hm chahte h ki number 1 to 100 aaye to hm aise likhenge "rand()%100 +1" okk!!!
    printf("The number is %d\n",number);        // ise hm krenge taki ye sirf background m run ho.
    //This game will become interesting if we will hide this "printf" beacuse phir pura khud se hi guess krna pdega.
    
    //keep running the loop until the number is guessed

    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("Lower number please!!\n");
        }
        else if(guess<number)
        {
            printf("Higher number please!!\n");
        }
        else
        {
            printf("You guessed it in %dth\n attempts",nguesses);
        }
        nguesses++;     //guess pta chlegi isse kitne guess m aaya.
    }while(guess!=number);

    return 0;
}

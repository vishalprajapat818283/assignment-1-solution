#include <stdio.h>


int main(){
    //insurance policy
    int age,car_origin,accident_record;

    printf("enter age of car driver:\n");
    scanf("%d", &age);
    printf("enter car origin:\n");
    printf("1 for made in india and 0 for not made in india-\n");
    scanf("%d", &car_origin);
    printf("enter accident record:\n");
    printf("enter 1 for good record 0 for bad record-\n");
    printf("(good means no accident in last 3year)\n");
    scanf("%d", &accident_record);

    if(age>=25 && car_origin && accident_record){
        printf("type of motor insurance policy is Comprehensive policy\n");
        printf("ammount of premium is 6 percent premium\n");
        printf("no any excess payable on any claim\n");
    }

    else if(age>=25 && car_origin && !accident_record){
         printf("type of motor insurance policy is Comprehensive policy\n");
        printf("ammount of premium is 7 percent premium\n");
        printf("the policy holder has to pay the first 100 rupees of a claim \n");
    }

    else if(age>=25 && !car_origin && accident_record){
         printf("type of motor insurance policy is Comprehensive policy\n");
        printf("ammount of premium is 6 percent premium\n");
        printf("the policy holder has to pay the first 100 rupees of a claim \n");
    }
    else if(age>=25 && !car_origin && !accident_record){
        printf("type of motor insurance policy is third party policy\n");
        printf("ammount of premium is 7 percent premium\n");
        printf("no any excess payable on any claim\n");
    }
    else if(age<25 && car_origin && accident_record){
        printf("type of motor insurance policy is Comprehensive policy\n");
        printf("ammount of premium is 6 percent premium\n");
        printf("the policy holder has to pay the first 100 rupees of a claim \n");
    }
    else if(age<25 && !car_origin && accident_record){
        printf("type of motor insurance policy is Comprehensive policy\n");
        printf("ammount of premium is 8 percent premium\n");
        printf("the policy holder has to pay the first 100 rupees of a claim \n");
    }
    else{
        printf("no polcy issued\n");
    }
    return 0;
}
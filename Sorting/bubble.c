#include <stdio.h>

int bubble(int num[], int count){
    for(int a = 0; a < count; a++){
        for(int i = 0; i < count; i++){
        if(num[i]>num[i+1]){
            int temp = num[i];
            num[i] = num[i+1];
            num[i+1] = temp;
        }
    }
    }
    printf("\nThe sorted array is: ");
    for(int i = 0; i < count; i++){
        printf("%d ", num[i]);
    }
}

int main(){
    int a,count;
    printf("Please enter the number of inputs: ");
    scanf("%d", &count);
    int num[count];
    printf("Please enter the numerical inputs: ");
    for(int i = 0; i < count; i++){
        scanf("%d", &num[i]);
    }
    printf("The original array is: ");
    for(int i = 0; i < count; i++){
        printf("%d ", num[i]);
    }
    bubble(num, count);
}
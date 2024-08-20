#include <stdio.h>

int linear(int num[], int count, int search){
    for(int i = 0; i<count;i++){
        if(num[i]==search){
            if(i+1 == 1){
                printf("%d is located on %dst position in the given array.\n", search, i+1);
            }else if(i+1 == 2){
                printf("%d is located on %dnd position in the given array.\n", search, i+1);
            }else if(i+1 == 3){
                printf("%d is located on %drd position in the given array.\n", search, i+1);
            }else{
                printf("%d is located on %dth position in the given array.\n", search, i+1);
            }
        }else{
            printf("Not Found\n");
        }
    }
}

int main(){
    int search,count;
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
    printf("\nEnter the number to be searched: ");
    scanf("%d", &search);
    printf("Searching %d...\n", search);
    linear(num, count, search);
}
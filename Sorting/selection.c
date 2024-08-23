#include <stdio.h>

int selection(int num[], int count){
    for(int i = 0; i < count; i++){
        int position = i;
        for(int j = 0; j < count; j++){
            if (num[position] > num[j]){
                position = j;
            }if(position != i){
                int swap = num[i];
                num[i] = num[position];
                num[position] = swap;
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
    selection(num, count);
}

/*Algorithm
1. traverse from left and compare adjacent elements and the lower one is placed at left side. 
2. In this way, the smallest element is moved to the leftmost end at first. 
3. This process is then continued to find the second smallest and place it and so on until the data is sorted.*/
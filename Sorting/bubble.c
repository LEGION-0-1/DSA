#include <stdio.h>

int bubble(int num[], int count){//function for sorting
    for(int a = 0; a < count; a++){
        for(int i = 0; i < count; i++){//traversing through the array
        if(num[i]>num[i+1]){
            int temp = num[i];//swapping by values to sort the array
            num[i] = num[i+1];
            num[i+1] = temp;
        }
    }
    }
    printf("\nThe sorted array is: ");
    for(int i = 0; i < count; i++){//printing the sorted array
        printf("%d ", num[i]);
    }
}

int main(){
    int count;//variable for number of elements to be input in the array
    printf("Please enter the number of inputs: ");
    scanf("%d", &count);//giving count an integer value
    int num[count];//array declaration
    printf("Please enter the numerical inputs: ");
    for(int i = 0; i < count; i++){//storing inputs in an array
        scanf("%d", &num[i]);
    }
    printf("The original array is: ");
    for(int i = 0; i < count; i++){//printing the original array
        printf("%d ", num[i]);
    }
    bubble(num, count);//passing values to another function
}

/*Algorithm
1. traverse from left and compare adjacent elements and the higher one is placed at right side. 
2. In this way, the largest element is moved to the rightmost end at first. 
3. This process is then continued to find the second largest and place it and so on until the data is sorted.*/
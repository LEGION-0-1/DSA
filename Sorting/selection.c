#include <stdio.h>

int selection(int num[], int count){//function for sorting
    for(int i = 0; i < count; i++){//traversing the array to find the smallest element
        int position = i;
        for(int j = 0; j < count; j++){
            if (num[position] > num[j]){//swapping by value
                position = j;
            }if(position != i){
                int swap = num[i];
                num[i] = num[position];
                num[position] = swap;
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
    selection(num, count);//passing values to another function
}

/*Algorithm
1. traverse from left and compare adjacent elements and the lower one is placed at left side. 
2. In this way, the smallest element is moved to the leftmost end at first. 
3. This process is then continued to find the second smallest and place it and so on until the data is sorted.*/
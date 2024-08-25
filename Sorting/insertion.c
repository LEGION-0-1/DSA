#include <stdio.h>

void insertion(int num[], int len){//function for sorting
    for (int i = 1; i < len; ++i) {//traversing through the array
        int a = num[i];
        int b = i - 1;

        while (b >= 0 && num[b] > a) {//swapping by value to sort the array
            num[b + 1] = num[b];
            b = b - 1;
        }
        num[b + 1] = a;
    }
    printf("\nThe sorted array is: ");
    for (int i = 0; i < len; ++i)//printing the sorted array
        printf("%d ", num[i]);
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
    int len = sizeof(num)/ sizeof(num[0]);
    insertion(num, len);//passing values to another function
}

/*Algorithm
1. Traverse from left and compare adjacent elements and the higher one is placed at right side. 
2. In this way, the largest element is moved to the rightmost end at first. 
3. This process is then continued to find the second largest and place it and so on until the data is sorted.*/
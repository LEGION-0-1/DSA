#include <stdio.h>

void shell(int num[], int count) {//function for sorting
    for (int interval = count / 2; interval > 0; interval /= 2) {//traversing the array
        for (int i = interval; i < count; i += 1) {
            int temp = num[i];
            int j;
            for (j = i; j >= interval && num[j - interval] > temp; j -= interval) {//swap by value to sort the array
                num[j] = num[j - interval];
            }
            num[j] = temp;
        }
    }
    printf("\nThe sorted array is: ");
    for (int i = 0; i < count; ++i){//printing the sorted array
        printf("%d ", num[i]);
    }
    printf("\n");
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
    shell(num, count);//passing values to another function
}

/*It is a variation of Insertion Sort
*/
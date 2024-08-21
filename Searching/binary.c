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
}
int binary(int num[], int low, int high, int search)
{
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if x is present at mid
        if (num[mid] == search)
            return mid;

        // If x greater, ignore left half
        if (num[mid] < search)
            low = mid + 1;

        // If x is smaller, ignore right half
        else
            high = mid - 1;
    }
    return -1;
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
    bubble(num, count);
    printf("\nThe sorted array is: ");
    for(int i = 0; i < count; i++){
        printf("%d ", num[i]);
    }
    printf("\nEnter the number to be searched: ");
    scanf("%d", &search);
    printf("Searching for %d...", search);
    int index = binary(num, 0, count-1, search);
    if(index == -1)
        printf("\n%d not found", search);
    else
        printf("\n%d is at index %d", search, index);
}
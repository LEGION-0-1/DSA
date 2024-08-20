#include <stdio.h>

int getMax(int arr[], int n){
    int mx = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] > mx){
            mx = arr[i];
        }
    }
    return mx;
}

void countSort(int arr[], int n, int exp) {
    int output[n];
    int count[10] = {0};

    for (int i = 0; i < n; i++){
        count[(arr[i] / exp) % 10]++;
    }
    for (int i = 1; i < 10; i++){
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--){
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++){
        arr[i] = output[i];
    }
}

void radixSort(int arr[], int n){  
    int m = getMax(arr, n); 

    for (int exp = 1; m / exp > 0; exp *= 10){
        countSort(arr, n, exp);
    }
}

void printArray(int arr[], int n){
    printf("\nThe sorted array is: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
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
    radixSort(num, count);
    printArray(num, count);
    return 0;
}
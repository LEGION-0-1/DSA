#include <stdio.h>

void shell(int num[], int count) {
    for (int interval = count / 2; interval > 0; interval /= 2) {
        for (int i = interval; i < count; i += 1) {
            int temp = num[i];
            int j;
            for (j = i; j >= interval && num[j - interval] > temp; j -= interval) {
                num[j] = num[j - interval];
            }
            num[j] = temp;
        }
    }
    printf("\nThe sorted array is: ");
    for (int i = 0; i < count; ++i) {
        printf("%d ", num[i]);
    }
    printf("\n");
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
    shell(num, count);
}
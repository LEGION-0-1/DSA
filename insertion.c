#include <stdio.h>

void insertion(int num[], int len)
{
    for (int i = 1; i < len; ++i) {
        int a = num[i];
        int b = i - 1;

        while (b >= 0 && num[b] > a) {
            num[b + 1] = num[b];
            b = b - 1;
        }
        num[b + 1] = a;
    }
    printf("\nThe sorted array is: ");
    for (int i = 0; i < len; ++i)
        printf("%d ", num[i]);
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
    int len = sizeof(num)/ sizeof(num[0]);
    insertion(num, len);
}
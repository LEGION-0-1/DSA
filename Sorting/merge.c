#include <stdio.h> 
#include <stdlib.h> 

void merge(int arr[], int l, int m, int r){// function actually responsible for sorting
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 

	int L[n1], R[n2]; 

	for (i = 0; i < n1; i++) 
		L[i] = arr[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[m + 1 + j]; 

	i = 0; 

	j = 0; 

	k = l; 
	while (i < n1 && j < n2) { 
		if (L[i] <= R[j]) { 
			arr[k] = L[i]; 
			i++; 
		} 
		else { 
			arr[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 

	while (i < n1) { 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 

	while (j < n2) { 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
} 

void mergeSort(int arr[], int l, int r){ //function dividing the array into smaller arrays
	if (l < r){ 
		int m = l + (r - l) / 2; 

		mergeSort(arr, l, m); 
		mergeSort(arr, m + 1, r); 

		merge(arr, l, m, r); 
	} 
} 

void printArray(int A[], int size){//function to print the original array 
	int i; 
	for (i = 0; i < size; i++) 
		printf("%d ", A[i]); 
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
	printArray(num, count);//passing values to another function to print the array 
	mergeSort(num, 0, count - 1);//passing values to another function to be sorted 
	printf("\nSorted array is \n"); 
	printArray(num, count); //passing values to another function to print the sorted array 
	return 0; 
}

/*Algorithm
The Merge Sort algorithm is a divide-and-conquer algorithm that sorts an array by first breaking it down into smaller arrays, and then building the array back together the correct way so that it is sorted.
1. Divide: The algorithm starts with breaking up the array into smaller and smaller pieces until one such sub-array only consists of one element.
2. Conquer: The algorithm merges the small pieces of the array back together by putting the lowest values first, resulting in a sorted array.
*/
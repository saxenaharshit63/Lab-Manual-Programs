// WAP to merge two sorted array & no element is repeated during merging

#include <stdio.h>	
void mergeSortedArrays(int arr1[], int n1, int arr2[], int n2) {
    int merged[n1 + n2];  
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            if (k == 0 || merged[k - 1] != arr1[i]) {
                merged[k++] = arr1[i];
            }
            i++;
        }
        else if (arr1[i] > arr2[j]) {
            if (k == 0 || merged[k - 1] != arr2[j]) {
                merged[k++] = arr2[j];
            }
            j++;
        }
        else { 
            if (k == 0 || merged[k - 1] != arr1[i]) {
                merged[k++] = arr1[i];
            }
            i++;
            j++;
        }
    }
    while (i < n1) {
        if (k == 0 || merged[k - 1] != arr1[i]) {
            merged[k++] = arr1[i];
        }
        i++;
    }
    while (j < n2) {
        if (k == 0 || merged[k - 1] != arr2[j]) {
            merged[k++] = arr2[j];
        }
        j++;
    }
    printf("Merged array without duplicates: ");
    for (int l = 0; l < k; l++) {
        printf("%d ", merged[l]);
    }
    printf("\n");
}
int main() {
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 3, 6, 7, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    mergeSortedArrays(arr1, n1, arr2, n2);
    return 0;
}
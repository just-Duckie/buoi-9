#include <stdio.h>

void print_even_and_odd_numbers(int arr[], int n) {
    int i; 
	for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int n,i;
    scanf("%d", &n);

    int arr[n];
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    print_even_and_odd_numbers(arr, n);

    return 0;
}


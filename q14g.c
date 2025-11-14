#include <stdio.h>
int main() {
    int n, i, j, count = 0, flag;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers are: ");
    for (i = 0; i < n; i++) {
        if (arr[i] <= 1)
            continue;  

        flag = 0;  

        for (j = 2; j < arr[i]; j++) {
            if (arr[i] % j == 0) {
                flag = 1; 
                break;
            }
        }

        if (flag == 0) { 
            printf("%d ", arr[i]);
            count++;
        }
    }
    printf("\nTotal prime numbers: %d\n", count);
    return 0;
}

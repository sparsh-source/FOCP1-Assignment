#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of scores: ");
    scanf("%d", &n);

    int scores[n], even_array[n], odd_array[n];
    int ec = 0, oc = 0;

    for (int i = 0; i < n; i++) {
        printf("Enter score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < n; i++) {
        if (scores[i] % 2 == 0) {
            even_array[ec] = scores[i];
            ec++;
        } else {
            odd_array[oc] = scores[i];
            oc++;
        }
    }

    printf("\nEven scores: ");
    if (ec == 0)
        printf("None");
    else
        for (int i = 0; i < ec; i++)
            printf("%d ", even_array[i]);

    printf("\nOdd scores: ");
    if (oc == 0)
        printf("None");
    else
        for (int i = 0; i < oc; i++)
            printf("%d ", odd_array[i]);

    printf("\n");

    return 0;
}

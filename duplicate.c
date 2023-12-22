#include <stdio.h>

void printDuplicates(int arr[], int n) {
    int i = 0;
    while (i < n) {
 
        int count = 1;
        while ((i < n - 1) && (arr[i] == arr[i + 1])) {
            count++;
            i++;
        }

      
        if (count > 1) {
            printf("%d->%d", arr[i], count);

          
            if (i < n - 1)
                printf(",");
        }
        i++;
    }
    printf("\n");
}

int main() {
    int N;
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int array[N];
    printf("Enter the sorted array with duplicates: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    printf("Sample Output:\n");
    printDuplicates(array, N);

    return 0;
}

#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int data[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }

    bubbleSort(data, n);

    double median;
    if (n % 2 == 1) {
        median = data[n / 2];
    } else {
        median = (data[n / 2 - 1] + data[n / 2]) / 2.0;
    }

    printf("%.1lf\n", median);

    return 0;
}
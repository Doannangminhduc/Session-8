#include <stdio.h>

int main() {
    int arr[2][3] = {{1, 5, 3},{4, 8, 2}
	};

    int rows = 2;
    int cols = 3;
    int max = arr[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}


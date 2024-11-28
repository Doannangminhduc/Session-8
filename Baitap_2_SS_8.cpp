#include <stdio.h>
	int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int num = sizeof(arr) / sizeof(arr[0]);

    printf("Mang hien tai: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int target;
    printf("Nhap vao phan tu can tim: ");
    scanf("%d", &target);

    int found = 0;
    for (int i = 0; i < num; i++) {
        if (arr[i] == target) {
            printf("Vi tri phan tu trong mang la: %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Phan tu khong ton tai trong mang.\n");
    }
		return 0;
	}

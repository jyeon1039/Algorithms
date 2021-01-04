#include <stdio.h>

int main() {
	int N;
	int arr[100];
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	for (int i = 1; i < N; i++) {
		for (int j = i; j >= 1; j--) {
			if (arr[j] < arr[j - 1]) {
				int tmp;
				tmp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = tmp;
			}
			else
				break;
		}
	}

	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
	return 0;
}
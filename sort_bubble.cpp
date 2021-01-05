#include <stdio.h>
 
int main() {
	int N;
	int arr[100];
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	for (int i = N - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp;
				tmp = arr[j];
				arr[j] = arr[j + 1]; 
				arr[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);

	return 0;
}
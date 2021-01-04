#include <stdio.h>

int main() {
	int N;
	int arr[100];
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < N; i++) {
		int idx = i;
		for (int j = i; j < N; j++) {
			if (arr[idx] > arr[j]) {
				idx = j;
			}
		}
		int tmp;
		tmp = arr[i];
		arr[i] = arr[idx];
		arr[idx] = tmp;
	}

	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
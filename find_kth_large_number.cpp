#include <stdio.h>

int main() {
	int K, N;
	int arr[100000] = { 0, };
	scanf("%d %d", &N, &K);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	int maxIndex = 0;
	for (int i = 0; i < K; i++) {
		maxIndex = 0;
		for (int j = 0; j < N; j++) {
			if (arr[maxIndex] < arr[j]) {
				maxIndex = j;
			}
		}
		if (i != K - 1)
			arr[maxIndex] = -1;
	}

	printf("%d", arr[maxIndex]);


	return 0;
}
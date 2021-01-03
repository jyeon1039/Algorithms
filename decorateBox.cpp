#include <stdio.h>

int main() {
	int N;
	int arr[1001] = { 0, };
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int color;
		scanf("%d", &color);
		if (arr[color] >= 2)
			arr[color] = 2;
		else
			arr[color]++;
	}

	int cnt = 0;

	for (int i = 1; i < N + 1; i++) {
		cnt += arr[i];
	}

	if (cnt >= 6)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
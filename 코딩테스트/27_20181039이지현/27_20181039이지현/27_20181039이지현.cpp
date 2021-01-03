#include <stdio.h>

int main() {
	int N, X, Y, R;
	int map[100][100];
	scanf("%d", &N);
	scanf("%d %d %d", &X, &Y, &R);
	X = X + 1;
	Y = Y + 1;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			map[i][j] = 0;
		}
	}


	for (int i = 0; i < R; i++) {
		int cnt = i + 1;
		for (int j = 0; j < cnt; j++) {
			if (map[X - (cnt - j)][Y + j] >= 0 || map[X - (cnt - j)][Y + j] < N)
				map[X - (cnt - j)][Y + i] = cnt;

			if (map[X - (cnt - j)][Y - j] >= 0 || map[X - (cnt - j)][Y - j] < N)
				map[X - (cnt - j)][Y - j] = cnt;

			if (map[X + (cnt - j)][Y + j] >= 0 || map[X + (cnt - j)][Y + j] < N)
				map[X + (cnt - j)][Y + j] = cnt;

			if (map[X + (cnt - j)][Y - j] >= 0 || map[X + (cnt - j)][Y - j] < N)
				map[X + (cnt - j)][Y - j] = cnt;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == X - 1 && j == Y - 1)
				printf("x ");
			else
				printf("%d ", map[i][j]);
		}
		printf("\n");
	}

	return 0;
}
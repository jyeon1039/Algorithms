#include <stdio.h>

int main() {
	int N, X, Y, R;
	scanf("%d", &N);
	int map[100][100] = { 0, };
	scanf("%d %d %d", &X, &Y, &R);
	X = X - 1;
	Y = Y - 1;

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			int distanceCol = (X - i);
			int distanceRow = (Y - j);

			if (distanceCol < 0)
				distanceCol *= -1;
			if (distanceRow < 0)
				distanceRow *= -1;

			int distance = distanceCol + distanceRow;

			if (distance <= R)
				map[i][j] = distance;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == X && j == Y)
				printf("x ");
			else
				printf("%d ", map[i][j]);
		}
		printf("\n");
	}

	return 0;
}
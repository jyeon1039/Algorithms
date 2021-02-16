#include <stdio.h>
 
int main() {
	int N;
	int map[10][10];
	scanf("%d", &N);

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			scanf("%d", &map[i][j]);
		}
	}

	for (int i = 0; i < N; i++) {
		for (int col = 0; col < 10; col++) {
			if (map[i][col] == 0)
				map[i][col] = 1;
			else
				map[i][col] = 0;
		}

		for (int row = 0; row < 10; row++) {
			if (row == i)
				continue;

			if (map[row][i] == 0)
				map[row][i] = 1;
			else
				map[row][i] = 0;
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}

	return 0;
}
#include <stdio.h>

int main() {
	int arr[8][8];
	int row = 0, col = 0;
	int kill = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			scanf("%d", &arr[i][j]);
			if (arr[i][j] == 1) {
				row = i;
				col = j;
			}
		}
	}

	// 룩이 있는지 의미함
	for (int i = row + 1; i < 8; i++) {
		if (arr[i][col] == 3)
			break;
		else if (arr[i][col] == 2)
			kill = 1;
	}

	if (!kill) {
		for (int i = row - 1; i >= 0; i--) {
			if (arr[i][col] == 3)
				break;
			else if (arr[i][col] == 2)
				kill = 1;
		}
	}

	if (!kill) {
		for (int i = col + 1; i < 8; i++) {
			if (arr[row][i] == 3)
				break;
			else if (arr[row][i] == 2)
				kill = 1;
		}
	}
	if (!kill) {
		for (int i = row - 1; i >= 0; i--) {
			if (arr[row][i] == 3)
				break;
			else if (arr[row][i] == 2)
				kill = 1;
		}
	}

	printf("%d", kill);

	return 0;
}
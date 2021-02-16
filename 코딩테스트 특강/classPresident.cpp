#include <stdio.h>
 
int main() {
	int N;
	int information[1001][5] = { 0, };
	int student[1001] = { 0, };
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < 5; j++)
			scanf("%d", &information[i][j]);
	}

	int max = -1;
	int president = 1;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (i == j)
				continue;

			if (information[i][0] == information[j][0]
				|| information[i][1] == information[j][1]
				|| information[i][2] == information[j][2]
				|| information[i][3] == information[j][3]
				|| information[i][4] == information[j][4])
				student[i]++;

			if (student[i] > max) {
				max = student[i];
				president = i;
			}
		}
	}

	printf("%d", president);

	return 0;
}
#include <stdio.h>
 
int map[5][5] = { 0, };

void checkMap(int number) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (map[i][j] == number)
				map[i][j] = 99;
		}
	}
}

bool checkBingo() {
	int cnt = 0;
	int bingo = 1;

	//����
	for (int i = 0; i < 5; i++) {
		bingo = 1;
		for (int j = 0; j < 5; j++) {
			if (map[i][j] != 99)
				bingo = 0;
		}
		if (bingo)
			cnt++;
	}

	//����
	for (int i = 0; i < 5; i++) {
		bingo = 1;
		for (int j = 0; j < 5; j++) {
			if (map[j][i] != 99)
				bingo = 0;
		}
		if (bingo)
			cnt++;
	}

	//������ �밢��
	bingo = 1;
	for (int i = 0; i < 5; i++) {
		if (map[i][i] != 99)
			bingo = 0;
	}
	if (bingo)
		cnt++;

	//���� �밢��
	bingo = 1;
	for (int i = 0; i < 5; i++) {
		if (map[i][4 - i] != 99)
			bingo = 0;
	}
	if (bingo)
		cnt++;

	return (cnt >= 3) ? true : false;
}

int main() {
	int num[25] = { 0, };

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			scanf("%d", &map[i][j]);
	}

	for (int i = 0; i < 25; i++)
		scanf("%d", &num[i]);

	for (int i = 0; i < 25; i++) {
		checkMap(num[i]);
		if (checkBingo()) {
			printf("%d", i + 1);
			break;
		}
	}

	return 0;
}
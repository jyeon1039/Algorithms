#include <iostream>
using namespace std;

int main() {
	int N;
	int map[101][101] = { 0, };
	int color[101] = { 0, };
	cin >> N;

	for (int i = 1; i <= N; i++) {
		int x, y, width, height;
		cin >> x >> y >> width >> height;
		for (int w = x; w < x + width; w++) {
			for (int h = y; h < y + height; h++) {
				map[w][h] = i;
			}
		}
	}

	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			color[map[i][j]]++;
		}
	}

	for (int i = 1; i <= N; i++)
		cout << color[i] << "\n";

	return 0;
}
#include <stdio.h>
 
int gcd(int a, int b) {
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main() {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	if (b > a) {
		int tmp;
		tmp = a;
		a = b;
		b = tmp;
	}

	printf("%d\n", gcd(a, b));
	printf("%d\n", lcm(a, b));

	return 0;
}
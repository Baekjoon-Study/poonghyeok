#include <stdio.h>

int main() {
	int a[28] = { 0 }, b[30] = { 0 };
	int student1, student2;
	for (int i = 0; i < 28; i++) {
		scanf("%d", &a[i]);
		b[a[i]-1] = 1;
	}
	for (int j = 0; j < 30; j++) {
		if (b[j] == 0) {
			printf("%d\n", j+1);
		}
	}
	return 0;
}
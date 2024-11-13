#include <stdio.h>

void sort(float * a, float* b, float* c, float* d) {
	float* arr[4] = { a, b, c, d };
	float tmp;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3 - i; j++) {
			if (*arr[j] > *arr[j + 1]) {
				tmp = *arr[j];
				*arr[j] = *arr[j + 1];
				*arr[j + 1] = tmp;
			}
		}
	}
}

int main() {
	float a, b, c, d;
	scanf("%f %f %f %f", &a, &b, &c, &d);
	sort(&a, &b, &c, &d);
	printf("%f %f %f %f\n", a, b, c, d);
}
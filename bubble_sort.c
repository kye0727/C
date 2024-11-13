// 포인터를 이용해 오름차순으로 정렬
#include <stdio.h>

void sort(float * a, float* b, float* c, float* d) {
	float* arr[4] = { a, b, c, d }; // arr[4]에서 {a, b, c, d}가 아닌 {*a, *b, *c, *d}를 사용할 시 값 자체가 할당되기 때문에 {*a, *b, *c, *d}는 사용 불가
	float tmp; // 버블정렬에서 변수값 교체를 위한 임시 변수 선언

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3 - i; j++) {
			if (*arr[j] > *arr[j + 1]) {  // 앞 포인터의 값이 더 큰 경우 오름차순 정렬
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
	printf("%f %f %f %f\n", a, b, c, d);  // 변수는 그대로지만 값이 변함
}

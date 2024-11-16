#include <stdio.h>

int main() {
	float floScore, mul, result = 0, sum = 0;
	for (int i = 0; i < 20; i++) {
		char name[51], score[3];
		scanf_s("%s %f %s", name, 51, &mul, score, 3);
		if (score[0] == 'P') continue;
		switch (score[0] + score[1])
		{
		case 108:
			floScore = 4.5;
			break;
		case 113:
			floScore = 4.0;
			break;
		case 109:
			floScore = 3.5;
			break;
		case 114:
			floScore = 3.0;
			break;
		case 110:
			floScore = 2.5;
			break;
		case 115:
			floScore = 2.0;
			break;
		case 111:
			floScore = 1.5;
			break;
		case 116:
			floScore = 1.0;
			break;
		default:
			floScore = 0;
			break;
		}
		sum += mul;
		result += mul * floScore;
	}
	result /= sum;
	printf("%f", result);
}
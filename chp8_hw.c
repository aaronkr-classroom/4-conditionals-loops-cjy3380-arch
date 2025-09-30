// 슬라이드 47
// Q1, Q2, Q3 작성하고 결과가 콘솔에서 표시하세요.
// 30분 이내 하세요.
// 4시에 반복문 슬라이드를 볼게요.
#include <stdio.h>

int main() {
	int result = -5;
	if (result <= 0)
		result = result * (-1);

	printf("result = %d", result);

	return 0;

}


int main() {
	int result = -5;
	result = (result <= 0) ? result * (-1) : result;

	printf("result = %d", result);

	return 0;
}

int main() {
	int result = 5;
	switch (result) {
	case 6:
		result = 0;
		break;
	case 5:
		result = 1;
	case 4:
		result = result * 10; break;

	}
	printf("q3: result: %d\n", result);

	result : 10;

	return 0;

}
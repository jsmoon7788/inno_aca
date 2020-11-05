#include <stdio.h>

int sum_result(int num) {
	if(num == 0) {
		return 0;
	}
	return num + sum_result(num - 1);
}

int main() {
	printf("%d\n", sum_result(100));
}

#include "dzomaTools.h"//v0.01
using namespace dzomaTools;

void randomFillArray(int array[], size_t length) {
	for (size_t i = 0; i < length; ++i) {
		array[i] = random(-20, 20);
	}
}

int sumOfNegatives(int array[], size_t length) {
	int sum = 0;
	for (size_t i = 0; i < length; ++i) {
		if (array[i] < 0) {
			sum += array[i];
		}
	}
	return sum;
}

int sumOfEvens(int array[], size_t length) {
	int sum = 0;
	for (size_t i = 0; i < length; ++i) {
		if (i % 2 == 0) {
			sum += array[i];
		}
	}
	return sum;
}

void printArray(int array[], size_t length) {
	printf("[");
	for (size_t i = 0; i < length; ++i) {
		printf("%d, ", array[i]);
	}
	printf("\b\b]");
}

int sumDiapason(int array[], size_t start, size_t end) {
	int sum = array[start];
	for (++start; start <= end; ++start) {
		sum += array[start];
	}
	return sum;
}

int sumBetweenFirstAndLastNegative(int array[], size_t length) {
	int start = length;
	int end = 0;
	for (size_t i = 0; i < length; i++) {
		if (array[i] < 0 && i < start) {
			start = i;
		}
		if (array[i] < 0 && i > end) {
			end = i;
		}
	}
	return sumDiapason(array, start, end);
}

int main() {
	const size_t length = 10;
    int arr[length];
	int diapason[2];

	const char* addition[2] = {"start of diapason: ", "end of diapason: "};
	inputNumbers(diapason, 2, "enter ", 0, addition, 0, length-1);

	if (diapason[0] > diapason[1]) {
		int temp = diapason[1];

		diapason[1] = diapason[0];
		diapason[0] = temp;
	}

	randomFillArray(arr, length);

	printf("arr = ");
	printArray(arr, length);

	printf("\nsum of negatives: %d\n", sumOfNegatives(arr, length));

	printf("sum from %d to %d: %d\n", diapason[0], diapason[1], sumDiapason(arr, diapason[0], diapason[1]));

	printf("sum of evens indexes: %d\n", sumOfEvens(arr, length));

	printf("sum between negatives: %d\n", sumBetweenFirstAndLastNegative(arr, length));
    return 0;
}
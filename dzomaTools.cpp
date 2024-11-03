#include "dzomaTools.h"//v0.01

void dzomaTools::inputNumbers(int arr[], unsigned short numbers, const char* text, short changeCounter) {
	for (char i = 0; i < numbers; ++i) {
		while (true) {
			system("cls");
			printf(text, i + changeCounter);
			if (scanf_s("%d", &arr[i]) != 1) {
				while (getchar() != '\n');
			}
			else {
				break;
			}
		}
	}
	system("cls");
}

void dzomaTools::inputNumbers(double arr[], unsigned short numbers, const char* text, short changeCounter) {
	for (char i = 0; i < numbers; ++i) {
		while (true) {
			system("cls");
			printf(text, i + changeCounter);
			if (scanf_s("%lf", &arr[i]) != 1) {
				while (getchar() != '\n');
			}
			else {
				break;
			}
		}
	}
	system("cls");
}


void dzomaTools::inputNumbers(int arr[], unsigned short numbers, const char* text, short changeCounter, const char* addition[]) {
	for (char i = 0; i < numbers; ++i) {
		while (true) {
			system("cls");
			char* buffer = new char[strlen(text) + strlen(addition[i]) + 3];
			sprintf_s(buffer, strlen(text) + strlen(addition[i]) + 3, "%s%s", text, addition[i]);
			printf(buffer, i + changeCounter);

			delete[] buffer;
			if (scanf_s("%d", &arr[i]) != 1) {
				while (getchar() != '\n');
			}
			else {
				break;
			}
		}
	}
	system("cls");
}

void dzomaTools::inputNumbers(double arr[], unsigned short numbers, const char* text, short changeCounter, const char* addition[]) {
	for (char i = 0; i < numbers; ++i) {
		while (true) {
			system("cls");
			char* buffer = new char[strlen(text) + strlen(addition[i]) + 3];
			sprintf_s(buffer, strlen(text) + strlen(addition[i]) + 3, "%s%s", text, addition[i]);
			printf(buffer, i + changeCounter);

			delete[] buffer;
			if (scanf_s("%lf", &arr[i]) != 1) {
				while (getchar() != '\n');
			}
			else {
				break;
			}
		}
	}
	system("cls");
}



void dzomaTools::minInDiapason(int arr[], size_t start, size_t end) {
	int min = arr[start];
	for (++start; start < end; ++start) {
		if (arr[start] < min) {
			min = arr[start];
		}
	}
}

void dzomaTools::maxInDiapason(int arr[], size_t start, size_t end) {
	int max = arr[start];
	for (++start; start < end; ++start) {
		if (arr[start] > max) {
			max = arr[start];
		}
	}
}

void dzomaTools::minInDiapason(double arr[], size_t start, size_t end) {
	int min = arr[start];
	for (++start; start < end; ++start) {
		if (arr[start] < min) {
			min = arr[start];
		}
	}
}

void dzomaTools::maxInDiapason(double arr[], size_t start, size_t end) {
	int max = arr[start];
	for (++start; start < end; ++start) {
		if (arr[start] > max) {
			max = arr[start];
		}
	}
}

#include "dzomaTools.h"//0.01

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
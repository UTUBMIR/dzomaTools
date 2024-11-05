#include "dzomaTools.h"//v0.01

//static destinationays
void dzomaTools::inputNumbers(int destination[], unsigned short numbers, const char* text, short changeCounter) {
	for (char i = 0; i < numbers; ++i) {
		while (true) {
			system("cls");
			printf(text, i + changeCounter);
			if (scanf_s("%d", &destination[i]) != 1) {
				while (getchar() != '\n');
			}
			else {
				break;
			}
		}
	}
	system("cls");
}

void dzomaTools::inputNumbers(double destination[], unsigned short numbers, const char* text, short changeCounter) {
	for (char i = 0; i < numbers; ++i) {
		while (true) {
			system("cls");
			printf(text, i + changeCounter);
			if (scanf_s("%lf", &destination[i]) != 1) {
				while (getchar() != '\n');
			}
			else {
				break;
			}
		}
	}
	system("cls");
}


void dzomaTools::inputNumbers(int destination[], unsigned short numbers, const char* text, short changeCounter, const char* addition[]) {
	for (char i = 0; i < numbers; ++i) {
		while (true) {
			system("cls");
			char* buffer = new char[strlen(text) + strlen(addition[i]) + 3];
			sprintf_s(buffer, strlen(text) + strlen(addition[i]) + 3, "%s%s", text, addition[i]);
			printf(buffer, i + changeCounter);

			delete[] buffer;
			if (scanf_s("%d", &destination[i]) != 1) {
				while (getchar() != '\n');
			}
			else {
				break;
			}
		}
	}
	system("cls");
}

void dzomaTools::inputNumbers(double destination[], unsigned short numbers, const char* text, short changeCounter, const char* addition[]) {
	for (char i = 0; i < numbers; ++i) {
		while (true) {
			system("cls");
			char* buffer = new char[strlen(text) + strlen(addition[i]) + 3];
			sprintf_s(buffer, strlen(text) + strlen(addition[i]) + 3, "%s%s", text, addition[i]);
			printf(buffer, i + changeCounter);

			delete[] buffer;
			if (scanf_s("%lf", &destination[i]) != 1) {
				while (getchar() != '\n');
			}
			else {
				break;
			}
		}
	}
	system("cls");
}



void dzomaTools::inputNumbers(int destination[], unsigned short numbers, const char* text, short changeCounter, int min, int max) {
	for (char i = 0; i < numbers; ++i) {
		while (true) {
			system("cls");
			printf(text, i + changeCounter);
			if (scanf_s("%d", &destination[i]) != 1 || destination[i] < min || destination[i] > max) {
				while (getchar() != '\n');
			}
			else {
				break;
			}
		}
	}
	system("cls");
}

void dzomaTools::inputNumbers(double destination[], unsigned short numbers, const char* text, short changeCounter, int min, int max) {
	for (char i = 0; i < numbers; ++i) {
		while (true) {
			system("cls");
			printf(text, i + changeCounter);
			if (scanf_s("%lf", &destination[i]) != 1 || destination[i] < min || destination[i] > max) {
				while (getchar() != '\n');
			}
			else {
				break;
			}
		}
	}
	system("cls");
}


void dzomaTools::inputNumbers(int destination[], unsigned short numbers, const char* text, short changeCounter, const char* addition[], int min, int max) {
	for (char i = 0; i < numbers; ++i) {
		while (true) {
			system("cls");
			char* buffer = new char[strlen(text) + strlen(addition[i]) + 3];
			sprintf_s(buffer, strlen(text) + strlen(addition[i]) + 3, "%s%s", text, addition[i]);
			printf(buffer, i + changeCounter);

			delete[] buffer;
			if (scanf_s("%d", &destination[i]) != 1 || destination[i] < min || destination[i] > max) {
				while (getchar() != '\n');
			}
			else {
				break;
			}
		}
	}
	system("cls");
}

void dzomaTools::inputNumbers(double destination[], unsigned short numbers, const char* text, short changeCounter, const char* addition[], int min, int max) {
	for (char i = 0; i < numbers; ++i) {
		while (true) {
			system("cls");
			char* buffer = new char[strlen(text) + strlen(addition[i]) + 3];
			sprintf_s(buffer, strlen(text) + strlen(addition[i]) + 3, "%s%s", text, addition[i]);
			printf(buffer, i + changeCounter);

			delete[] buffer;
			if (scanf_s("%lf", &destination[i]) != 1 || destination[i] < min || destination[i] > max) {
				while (getchar() != '\n');
			}
			else {
				break;
			}
		}
	}
	system("cls");
}



size_t dzomaTools::minInDiapason(int destination[], size_t start, size_t end) {
	size_t min = start;
	for (++start; start <= end; ++start) {
		if (destination[start] < destination[min]) {
			min = start;
		}
	}
	return min;
}

size_t dzomaTools::maxInDiapason(int destination[], size_t start, size_t end) {
	size_t max = start;
	for (++start; start <= end; ++start) {
		if (destination[start] > destination[max]) {
			max = start;
		}
	}
	return max;
}

size_t dzomaTools::minInDiapason(double destination[], size_t start, size_t end) {
	size_t min = start;
	for (++start; start <= end; ++start) {
		if (destination[start] < destination[min]) {
			min = start;
		}
	}
	return min;
}

size_t dzomaTools::maxInDiapason(double destination[], size_t start, size_t end) {
	size_t max = start;
	for (++start; start <= end; ++start) {
		if (destination[start] > destination[max]) {
			max = start;
		}
	}
	return max;
}
//static destinationays//

#include "dzomaTools.h"//v0.01




void dzomaTools::inputNumbers(int destination[], unsigned short numbers, const char* text, short changeCounter) {
	system("cls");
	for (char i = 0; i < numbers; ++i) {
		while (true) {
			printf(text, i + changeCounter);
			if (scanf_s("%d", &destination[i]) != 1) {
				while (getchar() != '\n');
				system("cls");
				printf("Enter number!\n");
			}
			else {
				system("cls");
				break;
			}
		}
	}
	system("cls");
}

void dzomaTools::inputNumbers(double destination[], unsigned short numbers, const char* text, short changeCounter) {
	system("cls");
	for (char i = 0; i < numbers; ++i) {
		while (true) {
			printf(text, i + changeCounter);
			if (scanf_s("%lf", &destination[i]) != 1) {
				while (getchar() != '\n');
				system("cls");
				printf("Enter number!\n");
			}
			else {
				system("cls");
				break;
			}
		}
	}
	system("cls");
}


void dzomaTools::inputNumbers(int destination[], unsigned short numbers, const char* text, short changeCounter, const char* addition[]) {
	system("cls");
	for (char i = 0; i < numbers; ++i) {
		while (true) {
			char* buffer = new char[strlen(text) + strlen(addition[i]) + 3];
			sprintf_s(buffer, strlen(text) + strlen(addition[i]) + 3, "%s%s", text, addition[i]);
			printf(buffer, i + changeCounter);

			delete[] buffer;
			if (scanf_s("%d", &destination[i]) != 1) {
				while (getchar() != '\n');
				system("cls");
				printf("Enter number!\n");
			}
			else {
				system("cls");
				break;
			}
		}
	}
	system("cls");
}

void dzomaTools::inputNumbers(double destination[], unsigned short numbers, const char* text, short changeCounter, const char* addition[]) {
	system("cls");
	for (char i = 0; i < numbers; ++i) {
		while (true) {
			char* buffer = new char[strlen(text) + strlen(addition[i]) + 3];
			sprintf_s(buffer, strlen(text) + strlen(addition[i]) + 3, "%s%s", text, addition[i]);
			printf(buffer, i + changeCounter);

			delete[] buffer;
			if (scanf_s("%lf", &destination[i]) != 1) {
				while (getchar() != '\n');
				system("cls");
				printf("Enter number!\n");
			}
			else {
				system("cls");
				break;
			}
		}
	}
	system("cls");
}




void dzomaTools::inputNumbers(int destination[], unsigned short numbers, const char* text, short changeCounter, int min, int max) {
	system("cls");
	for (char i = 0; i < numbers; ++i) {
		while (true) {
			printf(text, i + changeCounter);
			if (scanf_s("%d", &destination[i]) != 1 || destination[i] < min || destination[i] > max) {
				while (getchar() != '\n');
				system("cls");
				printf("Enter number from %d to %d!\n", min, max);
			}
			else {
				system("cls");
				break;
			}
		}
	}
	system("cls");
}

void dzomaTools::inputNumbers(double destination[], unsigned short numbers, const char* text, short changeCounter, double min, double max) {
	system("cls");
	for (char i = 0; i < numbers; ++i) {
		while (true) {
			printf(text, i + changeCounter);
			if (scanf_s("%lf", &destination[i]) != 1 || destination[i] < min || destination[i] > max) {
				while (getchar() != '\n');
				system("cls");
				printf("Enter number from %lf to %lf!\n", min, max);
			}
			else {
				system("cls");
				break;
			}
		}
	}
	system("cls");
}


void dzomaTools::inputNumbers(int destination[], unsigned short numbers, const char* text, short changeCounter, const char* addition[], int min, int max) {
	system("cls");
	for (char i = 0; i < numbers; ++i) {
		while (true) {
			char* buffer = new char[strlen(text) + strlen(addition[i]) + 3];
			sprintf_s(buffer, strlen(text) + strlen(addition[i]) + 3, "%s%s", text, addition[i]);
			printf(buffer, i + changeCounter);

			delete[] buffer;
			if (scanf_s("%d", &destination[i]) != 1 || destination[i] < min || destination[i] > max) {
				while (getchar() != '\n');
				system("cls");
				printf("Enter number from %d to %d!\n", min, max);
			}
			else {
				system("cls");
				break;
			}
		}
	}
	system("cls");
}

void dzomaTools::inputNumbers(double destination[], unsigned short numbers, const char* text, short changeCounter, const char* addition[], double min, double max) {
	system("cls");
	for (char i = 0; i < numbers; ++i) {
		while (true) {
			char* buffer = new char[strlen(text) + strlen(addition[i]) + 3];
			sprintf_s(buffer, strlen(text) + strlen(addition[i]) + 3, "%s%s", text, addition[i]);
			printf(buffer, i + changeCounter);

			delete[] buffer;
			if (scanf_s("%lf", &destination[i]) != 1 || destination[i] < min || destination[i] > max) {
				while (getchar() != '\n');
				system("cls");
				printf("Enter number from %lf to %lf!\n", min, max);
			}
			else {
				system("cls");
				break;
			}
		}
	}
	system("cls");
}


template <typename T>
size_t dzomaTools::minInDiapason(T destination[], size_t start, size_t end) {
	size_t min = start;
	for (++start; start <= end; ++start) {
		if (destination[start] < destination[min]) {
			min = start;
		}
	}
	return min;
}

template <typename T>
size_t dzomaTools::maxInDiapason(T destination[], size_t start, size_t end) {
	size_t max = start;
	for (++start; start <= end; ++start) {
		if (destination[start] > destination[max]) {
			max = start;
		}
	}
	return max;
}


bool dzomaTools::ask(const char* text) {
	char answer;
	while (true) {
		system("cls");
		printf(text);
		printf("(y/n): ");
		scanf_s("%c", &answer, 1);
		if (answer != 'y' && answer != 'n') {
			while (getchar() != '\n');
			continue;
		}
		return answer == 'y';
	}
}


double dzomaTools::random(double min, double max) {
	return fmod(min + rand(), (max - min + 1));
}

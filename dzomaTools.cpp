#include "dzomaTools.h"//v0.01


void dt::inputChars(char destination[], unsigned short count, const char* text, short changeCounter) {
	clearConsole();
	for (char i = 0; i < count; ++i) {
		while (true) {
			printf(text, i + changeCounter);
			if (scanf_s(" %c", &destination[i], 1) != 1) {
				while (getchar() != '\n');
				clearConsole();
				printf("\aError: Enter number!\n");
			}
			else {
				clearConsole();
				break;
			}
		}
	}
	clearConsole();
}

void dt::inputChars(char destination[], unsigned short count, const char* text, short changeCounter, char min, char max, bool matchCase) {
	clearConsole();
	for (char i = 0; i < count; ++i) {
		while (true) {
			printf(text, i + changeCounter);
			if (scanf_s(" %c", &destination[i], 1) != 1 || ((destination[i] < min || destination[i] > max) && ((destination[i] < (min + 32) || destination[i] > (max + 32)) || matchCase))) {
				while (getchar() != '\n');
				clearConsole();
				printf("\aError: Enter char from %c to %c!\n", min, max);
			}
			else {
				clearConsole();
				break;
			}
		}
	}
	clearConsole();
}

void dt::inputNumbers(int destination[], unsigned short count, const char* text, short changeCounter) {
	clearConsole();
	for (char i = 0; i < count; ++i) {
		while (true) {
			printf(text, i + changeCounter);
			if (scanf_s("%d", &destination[i]) != 1) {
				while (getchar() != '\n');
				clearConsole();
				printf("\aError: Enter number!\n");
			}
			else {
				clearConsole();
				break;
			}
		}
	}
	clearConsole();
}

void dt::inputNumbers(double destination[], unsigned short count, const char* text, short changeCounter) {
	clearConsole();
	for (char i = 0; i < count; ++i) {
		while (true) {
			printf(text, i + changeCounter);
			if (scanf_s("%lf", &destination[i]) != 1) {
				while (getchar() != '\n');
				clearConsole();
				printf("\aError: Enter number!\n");
			}
			else {
				clearConsole();
				break;
			}
		}
	}
	clearConsole();
}


void dt::inputNumbers(int destination[], unsigned short count, const char* text, short changeCounter, const char* addition[]) {
	clearConsole();
	for (char i = 0; i < count; ++i) {
		while (true) {
			char* buffer = new char[strlen(text) + strlen(addition[i]) + 3];
			sprintf_s(buffer, strlen(text) + strlen(addition[i]) + 3, "%s%s", text, addition[i]);
			printf(buffer, i + changeCounter);

			delete[] buffer;
			if (scanf_s("%d", &destination[i]) != 1) {
				while (getchar() != '\n');
				clearConsole();
				printf("\aError: Enter number!\n");
			}
			else {
				clearConsole();
				break;
			}
		}
	}
	clearConsole();
}

void dt::inputNumbers(double destination[], unsigned short count, const char* text, short changeCounter, const char* addition[]) {
	clearConsole();
	for (char i = 0; i < count; ++i) {
		while (true) {
			char* buffer = new char[strlen(text) + strlen(addition[i]) + 3];
			sprintf_s(buffer, strlen(text) + strlen(addition[i]) + 3, "%s%s", text, addition[i]);
			printf(buffer, i + changeCounter);

			delete[] buffer;
			if (scanf_s("%lf", &destination[i]) != 1) {
				while (getchar() != '\n');
				clearConsole();
				printf("\aError: Enter number!\n");
			}
			else {
				clearConsole();
				break;
			}
		}
	}
	clearConsole();
}




void dt::inputNumbers(int destination[], unsigned short count, const char* text, short changeCounter, int min, int max) {
	clearConsole();
	for (char i = 0; i < count; ++i) {
		while (true) {
			printf(text, i + changeCounter);
			if (scanf_s("%d", &destination[i]) != 1 || destination[i] < min || destination[i] > max) {
				while (getchar() != '\n');
				clearConsole();
				printf("\aError: Enter number from %d to %d!\n", min, max);
			}
			else {
				clearConsole();
				break;
			}
		}
	}
	clearConsole();
}

void dt::inputNumbers(double destination[], unsigned short count, const char* text, short changeCounter, double min, double max) {
	clearConsole();
	for (char i = 0; i < count; ++i) {
		while (true) {
			printf(text, i + changeCounter);
			if (scanf_s("%lf", &destination[i]) != 1 || destination[i] < min || destination[i] > max) {
				while (getchar() != '\n');
				clearConsole();
				printf("\aError: Enter number from %lf to %lf!\n", min, max);
			}
			else {
				clearConsole();
				break;
			}
		}
	}
	clearConsole();
}


void dt::inputNumbers(int destination[], unsigned short count, const char* text, short changeCounter, const char* addition[], int min, int max) {
	clearConsole();
	for (char i = 0; i < count; ++i) {
		while (true) {
			char* buffer = new char[strlen(text) + strlen(addition[i]) + 3];
			sprintf_s(buffer, strlen(text) + strlen(addition[i]) + 3, "%s%s", text, addition[i]);
			printf(buffer, i + changeCounter);

			delete[] buffer;
			if (scanf_s("%d", &destination[i]) != 1 || destination[i] < min || destination[i] > max) {
				while (getchar() != '\n');
				clearConsole();
				printf("\aError: Enter number from %d to %d!\n", min, max);
			}
			else {
				clearConsole();
				break;
			}
		}
	}
	clearConsole();
}

void dt::inputNumbers(double destination[], unsigned short count, const char* text, short changeCounter, const char* addition[], double min, double max) {
	clearConsole();
	for (char i = 0; i < count; ++i) {
		while (true) {
			char* buffer = new char[strlen(text) + strlen(addition[i]) + 3];
			sprintf_s(buffer, strlen(text) + strlen(addition[i]) + 3, "%s%s", text, addition[i]);
			printf(buffer, i + changeCounter);

			delete[] buffer;
			if (scanf_s("%lf", &destination[i]) != 1 || destination[i] < min || destination[i] > max) {
				while (getchar() != '\n');
				clearConsole();
				printf("\aError: Enter number from %lf to %lf!\n", min, max);
			}
			else {
				clearConsole();
				break;
			}
		}
	}
	clearConsole();
}


template <typename T>
size_t dt::minInDiapason(T destination[], size_t start, size_t end) {
	size_t min = start;
	for (++start; start <= end; ++start) {
		if (destination[start] < destination[min]) {
			min = start;
		}
	}
	return min;
}

template <typename T>
size_t dt::maxInDiapason(T destination[], size_t start, size_t end) {
	size_t max = start;
	for (++start; start <= end; ++start) {
		if (destination[start] > destination[max]) {
			max = start;
		}
	}
	return max;
}


bool dt::ask(const char* text) {
	char answer;
	while (true) {
		clearConsole();
		printf(text);
		printf("(y/n): ");
		scanf_s(" %c", &answer, 1);
		if (answer != 'y' && answer != 'n') {
			while (getchar() != '\n');
			continue;
		}
		return answer == 'y';
	}
}


void dt::clearConsole() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coordScreen = {0, 0};
	DWORD cCharsWritten;
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	DWORD dwConSize;

	if (!GetConsoleScreenBufferInfo(hConsole, &csbi)) return;
	dwConSize = csbi.dwSize.X * csbi.dwSize.Y;

	FillConsoleOutputCharacter(hConsole, ' ', dwConSize, coordScreen, &cCharsWritten);
	FillConsoleOutputAttribute(hConsole, csbi.wAttributes, dwConSize, coordScreen, &cCharsWritten);
	SetConsoleCursorPosition(hConsole, coordScreen);
}

double dt::random(double min, double max) {
	return fmod(min + rand(), (max - min + 1));
}
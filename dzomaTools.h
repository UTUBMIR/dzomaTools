#pragma once

#include <iostream>
namespace dzomaTools {//v0.01
	int random(int min, int max);

	//static arrays
	void inputNumbers(int destination[], unsigned short numbers, const char* text, short changeCounter);
	void inputNumbers(double destination[], unsigned short numbers, const char* text, short changeCounter);

	void inputNumbers(int destination[], unsigned short numbers, const char* text, short changeCounter, const char* addition[]);
	void inputNumbers(double destination[], unsigned short numbers, const char* text, short changeCounter, const char* addition[]);

	//with min and max
	void inputNumbers(int destination[], unsigned short numbers, const char* text, short changeCounter, int min, int max);
	void inputNumbers(double destination[], unsigned short numbers, const char* text, short changeCounter, double min, double max);

	void inputNumbers(int destination[], unsigned short numbers, const char* text, short changeCounter, const char* addition[], int min, int max);
	void inputNumbers(double destination[], unsigned short numbers, const char* text, short changeCounter, const char* addition[], double min, double max);


	size_t minInDiapason(int destination[], size_t start, size_t end);
	size_t maxInDiapason(int destination[], size_t start, size_t end);

	size_t minInDiapason(double destination[], size_t start, size_t end);
	size_t maxInDiapason(double destination[], size_t start, size_t end);
	//static arrays//
};


#pragma once

#include <iostream>
namespace dzomaTools {//v0.01
	//generating random number, between min and max.
	int random(int min, int max);

	//getting numbers from user. 
	//use %d in text to replace it with (item + "changeCounter").
	void inputNumbers(int destination[], unsigned short numbers, const char* text, short changeCounter);
	void inputNumbers(double destination[], unsigned short numbers, const char* text, short changeCounter);

	//getting numbers from user. 
	//prints text with additions for all items.
	//use %d in text or addition to replace it with (item + "changeCounter").
	void inputNumbers(int destination[], unsigned short numbers, const char* text, short changeCounter, const char* addition[]);
	void inputNumbers(double destination[], unsigned short numbers, const char* text, short changeCounter, const char* addition[]);

	//getting numbers from user. 
	//with min and max.
	//use %d in text or addition to replace it with (item + "changeCounter").
	void inputNumbers(int destination[], unsigned short numbers, const char* text, short changeCounter, int min, int max);
	void inputNumbers(double destination[], unsigned short numbers, const char* text, short changeCounter, double min, double max);

	//getting numbers from user. 
	//prints text with additions for all items with min and max.
	//use %d in text or addition to replace it with (item + "changeCounter").
	void inputNumbers(int destination[], unsigned short numbers, const char* text, short changeCounter, const char* addition[], int min, int max);
	void inputNumbers(double destination[], unsigned short numbers, const char* text, short changeCounter, const char* addition[], double min, double max);

	//find min value in diapason.
	template <typename T>
	size_t minInDiapason(T destination[], size_t start, size_t end);

	//find max value in diapason.
	template <typename T>
	size_t maxInDiapason(T destination[], size_t start, size_t end);
};


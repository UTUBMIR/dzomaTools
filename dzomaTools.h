#pragma once

#include <iostream>
namespace dzomaTools {//v0.01
	//static arrays
	void inputNumbers(int arr[], unsigned short numbers, const char* text, short changeCounter);
	void inputNumbers(double arr[], unsigned short numbers, const char* text, short changeCounter);

	void inputNumbers(int arr[], unsigned short numbers, const char* text, short changeCounter, const char* addition[]);
	void inputNumbers(double arr[], unsigned short numbers, const char* text, short changeCounter, const char* addition[]);

	//with min and max
	void inputNumbers(int arr[], unsigned short numbers, const char* text, short changeCounter, int min, int max);
	void inputNumbers(double arr[], unsigned short numbers, const char* text, short changeCounter, int min, int max);

	void inputNumbers(int arr[], unsigned short numbers, const char* text, short changeCounter, const char* addition[], int min, int max);
	void inputNumbers(double arr[], unsigned short numbers, const char* text, short changeCounter, const char* addition[], int min, int max);


	size_t minInDiapason(int arr[], size_t start, size_t end);
	size_t maxInDiapason(int arr[], size_t start, size_t end);

	size_t minInDiapason(double arr[], size_t start, size_t end);
	size_t maxInDiapason(double arr[], size_t start, size_t end);
	//static arrays//
};


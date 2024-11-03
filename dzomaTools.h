#pragma once

#include <iostream>
namespace dzomaTools {//v0.01
	//static arrays
	void inputNumbers(int arr[], unsigned short numbers, const char* text, short changeCounter);
	void inputNumbers(double arr[], unsigned short numbers, const char* text, short changeCounter);

	void inputNumbers(int arr[], unsigned short numbers, const char* text, short changeCounter, const char* addition[]);
	void inputNumbers(double arr[], unsigned short numbers, const char* text, short changeCounter, const char* addition[]);


	size_t minInDiapason(int arr[], size_t start, size_t end);
	size_t maxInDiapason(int arr[], size_t start, size_t end);

	size_t minInDiapason(double arr[], size_t start, size_t end);
	size_t maxInDiapason(double arr[], size_t start, size_t end);
	//static arrays//
};


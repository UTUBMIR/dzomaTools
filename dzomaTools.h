#pragma once

#include <iostream>
using namespace std;



namespace dzomaTools {//v0.01
	
	//generating random number, between min and max.
	double random(double min, double max);

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


	//asks question of user('y' or 'n')
	//and returns true if 'y'
	bool ask(const char* text);
};


//class BException: public exception {
//private:
//	char* message = nullptr;
//
//public:
//	BException(const char* msg): message(nullptr) {
//		time_t now = time(nullptr);
//		tm time;
//		localtime_s(&time, &now);
//
//		char buffer[50];
//		std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", &time);
//
//		size_t totalLength = strlen(buffer) + strlen(msg) + 24;
//		if (message == nullptr) {
//			delete[] message;
//		}
//		message = new char[totalLength];
//
//		snprintf(message, totalLength, "Error on line %d at[%s]: %s", __LINE__, buffer, msg);
//	}
//
//	const char* what() const noexcept override {
//		return message;
//	}
//
//	~BException();
//};
//BException::~BException() {
//	delete[] message;
//}
#include "phoneNumber.h"
#include <iostream>

using namespace std;


//DEFAULT CONSTRUCTOR
phoneNumber::phoneNumber() {
	countryCode_ = 0;
	areaCode_ = 0;
	phoneNum_ = 0;
	type_ = Type(0);
	}

//ALT CONSTRUCTOR
phoneNumber::phoneNumber(int countryCode, int areaCode, int phoneNum, Type type) {
	countryCode_ = countryCode;
	areaCode_ = areaCode;
	phoneNum_ = phoneNum;
	type_ = type;
	}

//OBSERVERS
int phoneNumber::getCountryCode() {
	return countryCode_;
	}

int phoneNumber::getAreaCode() {
	return areaCode_;
	}

int phoneNumber::getPhoneNum() {
	return phoneNum_;
	}

Type phoneNumber::getPhoneType() {
	return type_;
	}

//TRANSFORMERS
void phoneNumber::setCountryCode(int countryCode) {
	countryCode_ = countryCode;
	}

void phoneNumber::setAreaCode(int areaCode) {
	areaCode_ = areaCode;
	}

void phoneNumber::setPhoneNum(int phoneNum) {
	phoneNum_ = phoneNum;
	}

void phoneNumber::setPhoneType(Type type) {
	type_ = type;
	}


#include <iostream>
#include "Time.h"

using namespace std;

Time::Time() {
	minutes_ = 0;
	seconds_ = 0;
	}

Time::Time(int minutes, int seconds) {
	minutes_ = minutes;
	seconds_ = seconds;
	}

int Time::getMinutes() const {
	return minutes_;
	}

int Time::getSeconds() const {
	return seconds_;
	}

int Time::totalTime() const {
	return (minutes_ * 60) + seconds_;
	}



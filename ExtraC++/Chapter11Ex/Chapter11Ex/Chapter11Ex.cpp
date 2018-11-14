#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

void ElevenOne() {
	cout << "--- (11-1) ---" << endl;
	clockType myClock = clockType(1, 59, 59);
	clockType myClock1 = clockType(2,0,0);
	extendedClockType myExtendedClock0 = extendedClockType(0, 0, 0, 0);
	extendedClockType myExtendedClock1 = extendedClockType(0, 0, 0, 1);
	extendedClockType myExtendedClock2 = extendedClockType(0, 0, 0, -1);
	int h,m,s;
	cout << myClock << endl;
	myClock.incrementSeconds();
	cout << myClock << endl;

	cout << ((myClock == myClock1) ? "Equal" : "Not Equal") << endl;

	cout << endl << "Extensions" << endl;

	cout << myExtendedClock0 << endl;
	cout << myExtendedClock1 << endl;
	cout << myExtendedClock2 << endl;

	myExtendedClock0.incrementHours();
	myExtendedClock1.incrementHours();
	myExtendedClock2.incrementHours();

	cout << myExtendedClock0 << endl;
	cout << myExtendedClock1 << endl;
	cout << myExtendedClock2 << endl;
}

int main()
{
	cout << "Extended Chapter 11: " << endl;
	ElevenOne();


	char c;
	cin >> c;
}

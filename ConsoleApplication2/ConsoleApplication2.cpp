#include <iostream>
using namespace std;

int main() {
	int km = 0;
	int hour = 0;

	cout << "distance in km: ";
	cin >> km;
	cout << "time in hours: ";
	cin >> hour;
	cout << "You need to go at speed--> " << km / hour << " km/h";
}

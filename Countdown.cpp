#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;
void checkTime(int tiempo) {
	int time_passed = tiempo;
	time_t inicio = time(0);
	while (true) {
		double segundos_transcurridos = difftime(time(0), inicio);
		if (fmod(segundos_transcurridos, 1.0) == 0 && segundos_transcurridos > 0.0 && tiempo > 0) {
			inicio = time(0);
			tiempo -= 1;
		}
		if (tiempo == 0) {
			cout << "Han transcurrido " << time_passed << "segundos" << endl;
			break;
		}
	}
}

int main() {
	cout << "Introduce la cantidad de segundos que quieres esperar\n";
	int seconds;
	cin >> seconds;
	checkTime(seconds);
	return 0;
}
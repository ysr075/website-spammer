#include <iostream>
#include <time.h>
#include <windows.h>

std::string domain;
int i;
int j;

// sleep program
void sleep(float seconds) {
	int milli_seconds = 1000 * seconds;
	clock_t start_time = clock();
	while(clock() < start_time + milli_seconds);
}

// execute program
void executable() {
	for (;;) {
		std::cout << "domain: "; std::cin >> domain;
		std::cout << "return int: "; std::cin >> j;
		for (i = 0; i < j; i++) {
			ShellExecute(NULL, "open", domain.c_str(), NULL, NULL, SW_SHOWNORMAL);
			sleep(0.5);
		}
	}
}

int main() {
	executable();
	return 0;
}

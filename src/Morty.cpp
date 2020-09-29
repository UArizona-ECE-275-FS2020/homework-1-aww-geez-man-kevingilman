/* 
 __  __            _                                
|  \/  | ___  _ __| |_ _   _        ___ _ __  _ __  
| |\/| |/ _ \| '__| __| | | |      / __| '_ \| '_ \ 
| |  | | (_) | |  | |_| |_| |  _  | (__| |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_)  \___| .__/| .__/ 
                       |___/           |_|   |_|  
*/

// Include the Morty header file
#include "Morty.hpp"


void C137::Morty(int start, int stop) {
  int i;
		for (i = start; i <= stop; ++i) {
			if (i % 15 == 0) {
				std::cout << i << ": Aww Geez Man\n";
			}
			else if (i % 5 == 0) {
				std::cout << i << ": Geez\n";
			}
			else if (i % 3 == 0) {
				std::cout << i << ": Aww\n";
			}
			else {
				std::cout << i << ": \n";
			}
		}
	}

void C137::Morty(int start, int stop, int step) {
	int i;

	for (i = start; i <= stop; i = i + step) {
		if (i % 15 == 0) {
			std::cout << i << ": Aww Geez Man\n";
			}
		else if (i % 5 == 0) {
			std::cout << i << ": Geez\n";
			}
		else if (i % 3 == 0) {
			std::cout << i << ": Aww\n";
			}
		else {
			std::cout << i << ": \n";
			}
		}
	}


void Z286::Morty(int start, int stop) {
		int i;

		for (i = start; i <= stop; ++i) {
			if (i % 15 == 0) {
				std::cout << i << ": naM zeeG wwA\n";
			}
			else if (i % 5 == 0) {
				std::cout << i << ": zeeG\n";
			}
			else if (i % 3 == 0) {
				std::cout << i << ": wwA\n";
			}
			else {
				std::cout << i << ": \n";
			}
		}
	}

	void Z286::Morty(int start, int stop, int step) {
		int i;

		for (i = start; i <= stop; i = i + step) {
			if (i % 15 == 0) {
				std::cout << i << ": naM zeeG wwA\n";
			}
			else if (i % 5 == 0) {
				std::cout << i << ": zeeG\n";
			}
			else if (i % 3 == 0) {
				std::cout << i << ": wwA\n";
			}
			else {
				std::cout << i << ": \n";
			}
		}
	}

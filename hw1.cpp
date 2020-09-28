//Kevin Gilman
//September 27, 2020
//ECE 275

//Homework 1: Aww Geez Man

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

namespace c137 {
	int i;

	void Morty(int start, int stop) {
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

	void Morty(int start, int stop, int step) {
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
}
namespace z286 {
	void Morty(int start, int stop) {
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

	void Morty(int start, int stop, int step) {
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
}

int main(int argc, char** argv) {
	int start;
	int stop;
	int step;
	char dimension[5];

	switch (argc) {
	case 4: 
		start = atoi(*(argv + 1));
		stop = atoi(*(argv + 2));
		strcpy(dimension, *(argv + 3));
		break;
	case 5:
		start = atoi(*(argv + 1));
		stop = atoi(*(argv + 2));
		step = atoi(*(argv + 3));
		strcpy(dimension, *(argv + 4));
		break;
	}

	if (strcmp(dimension, "c137") == 0) {
		if (argc == 4) {
			c137::Morty(start, stop);
		}
		else {
			c137::Morty(start, stop, step);
		}
	}
	else if (strcmp(dimension, "z286") == 0) {
		if (argc == 4) {
			z286::Morty(start, stop);
		}
		else {
			z286::Morty(start, stop, step);
		}
	}
	else {
		std::cout << "ERROR, unknown dimension!!";
	}

	return(0);
}

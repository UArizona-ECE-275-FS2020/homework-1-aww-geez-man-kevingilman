/*
 _____ ____ _____   ____ _____ ____  
| ____/ ___| ____| |___ \___  | ___| 
|  _|| |   |  _|     __) | / /|___ \ 
| |__| |___| |___   / __/ / /  ___) |
|_____\____|_____| |_____/_/  |____/ 
                                     
 _   _                                         _      _ 
| | | | ___  _ __ ___   _____      _____  _ __| | __ / |
| |_| |/ _ \| '_ ` _ \ / _ \ \ /\ / / _ \| '__| |/ / | |
|  _  | (_) | | | | | |  __/\ V  V / (_) | |  |   <  | |
|_| |_|\___/|_| |_| |_|\___| \_/\_/ \___/|_|  |_|\_\ |_|
 
 
Aww Geez Man: Interdimensional Mortys.

One of Morty C137's favorite phrases is "Aww Geez Man". But, in dimension Z286, there
exists a Morty who says everything backwards.

*/

// Include the Morty header file
#include "Morty.hpp"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <stdio.h>


int main (int argc, char** argv) {
	// Parse the command line arguments. The program is executed as
	// ./AwwGeezMan {start} {stop} {dimension}
	// or 
	// ./AwwGeezMan {start} {stop} {step} {dimension}
	if (ac != 4 and ac != 5) {
		std::cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)" 
			<< std::endl;
		std::cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << std::endl;
		std::cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << std::endl;
		
		return -1;
	}
	
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

/*
 * Title: 	launcher.c
 * Author:	Joshua S. Andrews
 * Purpose:	Launch Program in initial state
 * Behavior:
	1) Print Menu and Wait for Response
	2) Verify Response Then Run Corresponding Command
	3) Conduct Error Checking on User Input
 * Input:
 * Output: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int new(){
}

int main() {
	int option;
	string input;
	
	start:
	printf("\nEnter a Menu Selection. \n   
		1) New Facility\n
		2) Existing Facility\n
		3) Options\n
		0) Exit\n\n");
	scanf("%d", &option);
	
	printf("\nDid you mean to put %d?", option);

	scanf("y/n", &input);
	if (&input != "y") goto start; 
	
	if (&option == 0) {
		exit(0);
	} else if (&option == 1) {
		// Start New Facility Database
		printf("Creating a New Facility Database");
	} else if (&option == 2) {
		// Open Existing Facility Database
		printf("Operating on an Existing Facility Database");
	} else if (&option == 3) {
		// Modify "./rsc/config.csv" through config.c
		printf("Modifying Options");
	} else {
		printf("Was given: %d", option);
		printf("An Improper Menu Option Was Provided...\n");
		goto start;
	}
}
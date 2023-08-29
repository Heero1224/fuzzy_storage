/*
 * Title: config.c
 * Author: Joshua S. Andrews
 * Version: 0.1
 * Purpose: To create a configuration file that stores the configs for a 
 * 			Storage Solution Companies Storage Management software
 * Return:	Returns a 1 if 
 *
 * Behavior:
 * 	1) Upon Creation, create all data then save
 * 	2) Upon Update
 *		- Read in data, update where appropriate, then save
 * 	3) Other Things?
 *		- Do what they need
 * Config File Format:
	1) Company Name, Phone Number, Address, Tax Rate
	2) Number of types of units
	3) Unit type 1 Name, 
	4 ... N) Unit type 4 ... N
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char FNAME[] = "rsc/config.csv";
FILE *FPOINTER;

/*
 * Checks if the User likes the input data
 * Returns 1 for yes, 0 for no
 */
int companyChecker(char *name, int *phone, char *address, float *tax) {
	printf("Is this correct? (y/n) \n"
		"Company Name: %s \n"
		"Phone Number: %d \n"
		"Address: %s \n"	
		"Tax Rate: %f", name, *phone, address, *tax);
	char input[2];
       	scanf("%s\n", input);
	return (strcmp(input, "y"));
}

/*
 * Creates config.csv by asking for user input
 * returns 0 if unsuccessfule, 1 if successful
 */ 
int createConfig() {
	char name[64];
	int phone;
	char address[64];
	float tax;

	if ((FPOINTER = fopen(FNAME, "w+"))==NULL) {
		printf("fopen was null");
		return 0;
	}

	char prompt[4][13] = {"Company Name", 
			      "Phone Number", 
			      "Address", 
			      "Tax Rate"};
 
	for (int i = 0; i < 4; i++) {
		printf("%s:\n", *(prompt+i));
		if (i == 0) {
			scanf("%63s",name);
		} else if (i == 1) {
			scanf("%d", &phone);
		} else if (i == 2) {
			scanf("%63s", address);
		} else {
			scanf("%f", &tax);
		}
	}
	// Redo create if false
	if (companyChecker(name, &phone, address, &tax) == 0) {
		fclose(FPOINTER);
		createConfig();
	} else {
		fprintf(FPOINTER, 
			"Company Name, Phone Number, Address, Tax Rate\n"
			"%s, %d, %s, %.4f\n", name, phone, address, tax);
	}
	return 1;
}

/*
 * Running a config update
 */
int update(char *flag) {
	if (flag == "a") {
		// prices
	} else if (flag == "b") {
		// tax rate
		
	} else if (flag == "c") {
		// company info
		
	} else if (flag == "d") {
		// add unit
	
	} else if (flag == "e") {
		// add unit type
		
	} else {
		// error: Incorrect flag type was provided
	
	}
}
 
/*
 * Driver function
 */
int main(int argc, char *args[]) {
	int retVal = 0;
	if (access(FNAME, F_OK) == 1) {
		retVal = 1;
	} else {
		printf("Will Create Config File\n");
		retVal = createConfig();
	}
	
	# Running an update to config
	if (argc > 1) {
		if (args[1] != "update" || argc != 2) {
			if (argc >= 3) {
				return 7;
			}
			fprint("Improper Variable Supplied");
			break;
		} else {
			retval = update(args[2]);
	}
	
	return retVal;
}	

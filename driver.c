/*
 * Title: MAIN.C
 * Author: Joshua S. Andrews
 * Purpose: An Inventory Management Program for a Storage Facility Company
 * Behavior:
 *	1) Launch
 *	2) Check Config
 *	3) Get User Query and Execute
 *	4) Recitify Errors
 *	5) Exit Appropriately
 * Input: CMD <PATH/config.csv> <PATH/DATABASE>
 *	option 1 is the location of the config file to use
 *	option 2 is the folder for all database csv files
 *	If not options specified, will follow default path
 *	If 1 option, will check for config file at location
 *	If 2 options provided, will check for both config and database files
 *	If an option fails, will ask if creating a new database
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "config.c"

/*
 *
 */

/*
 * Runs the program
 */
int run(char* config_path, char* database_path) {
	config(config_path);
	query(database_path);
}

 /*
  * Driver Function
  * Launches program and runs appropriate format of program
  */
int main(int argc, int *args[]) {
	// Config provided
	if (argc >= 2) {
		char* config_path = args[1];
	} else {
		char* config_path = "rsc/config.csv";
	}
	// Config and database provided
	if (argc == 3) {
		char* database_path = args[2];
	} else {
		char* database_path = "rsc/database";
	}
	return run(config_path, database_path);
}
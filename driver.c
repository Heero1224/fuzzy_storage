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
 */
 
 /*
  * Driver Function
  * Launches program and runs appropriate format of program
  */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "config.c"
int main(int argc, int *args[]) {
	if (
/*
 ============================================================================
 Name        : exampleProgram.c
 Author      : Bao Vuong
 Version     :
 Copyright   : Your copyright notice
 Description : Uses shared library to print greeting
               To run the resulting executable the LD_LIBRARY_PATH must be
               set to ${project_loc}/libBVDataStructures/.libs
               Alternatively, libtool creates a wrapper shell script in the
               build directory of this program which can be used to run it.
               Here the script will be called exampleProgram.
 ============================================================================
 */

#include <iostream>

#include "data_structures.h"

using namespace bv;
using namespace std;

int main(void) {
	linked_list example;
	example.add(34);
	example.add(1);
	for (int i=0; i<example.size(); i++) {
		cout << example[i] << endl;
	}
	return 0;
}

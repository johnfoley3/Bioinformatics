//
//  ase.cpp
//  Bioinformatics
//
//  Created by John Foley on 12/3/14.
//
//

#include "ase.h"
#include <iostream>
// #include "Pileup.h"
// #include "PileupColumn.h"
#include <fstream>
#include <sstream>
#include <stdlib.h>

using namespace std;

void processSNP

int main(int argc, char* argv[]) {

	// store the inputs
	string *bamfile = new string(argv[1]);
	string *snpfile = new string(argv[2]);
	string *outfile = new string(argv[3]);

	ifstream infile(*snpfile);

	string line;
	while (getline(infile, line)) {

		istringstream iss(line);

		string chrom_input;
		string start_input;
		string stop_input;
		string id_input;
		string strand_input;
		string alleles_input;
		string unknown_input;

		if (!(iss >> chrom_input >> start_input >> stop_input >> id_input >> unknown_input >> strand_input >> alleles_input)) { 

			cout << "Error reading from SNP file" << endl;
			break; 
		} // error

		
	}

	// hardcode these values to be 30
	int mapq = 30;
	int phred = 30;



	return 0;
}

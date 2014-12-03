//
//  Pileup.h
//  Bioinformatics
//
//  Created by John Foley on 12/3/14.
//
//

#ifndef __Bioinformatics__Pileup__
#define __Bioinformatics__Pileup__

#include <stdio.h>
#include <string>

using namespace std;

class Pileup {

public:
	Pileup(string *chrom, long start, long stop, string *id, string *strand, string *alleles);
	~Pileup();

	void parse_pileup( bamtool bamFH, int phred, int mapq);

private:
	string *chrom;
	long start;
	long stop;
	string *id;
	string *strand;
	char alleles[];
	int alleleCounts[];
};

#endif /* defined(__Bioinformatics__Pileup__) */

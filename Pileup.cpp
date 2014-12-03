//
//  Pileup.cpp
//  Bioinformatics
//
//  Created by John Foley on 12/3/14.
//
//

#include "Pileup.h"
#include <string>

Pileup::Pileup(string *chrom, long start, long stop, string *id, string *strand, string *alleles) {
    
    this.chrom = chrome;
    this.start = start;
    this.stop = stop;
    this.id = id;
    this.strand = strand;
    this.alleles = {alleles->at(0), alleles->at(2)};
    this.alleleCounts = {0,0,0,0};
}

Pileup::~Pileup() {
    
    
}

void Pileup::parse_pileup( bamtool bamFH, int phred, int mapq) {

	for col in 
}

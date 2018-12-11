//Sarah Luiza Martins Arantes de Araujo
//11611EBI012

#include <stdio.h>

typedef

	unsigned long long int

Bytes8;

typedef

	struct LCG { Bytes8 a, c, m, rand_max, atual; }

LCG;



void semente(LCG * r, Bytes8 seed) {

	r->a = 0x5DEECE66DULL;

	r->c = 11ULL;

	r->m = (1ULL << 48);

	r->rand_max = r->m - 1;

	r->atual = seed;

}

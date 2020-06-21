/**
 * All accepted short and long command-line flags are defined here
 */
#ifndef METEOR_OPTIONS_H
#define METEOR_OPTIONS_H

#include <getopt.h>
#include <stdlib.h>

#define SHORTOPTS "a:b:c:d:Bf:hm:o:O:qr:R:s:S:vw"

struct option longopts[] = {
	{ "alpha",        1, NULL, 'a' },
	{ "pll-bw",       1, NULL, 'b' },
	{ "batch",        1, NULL, 'B' },
	{ "center-freq",  1, NULL, 'c' },
	{ "freq-delta",   1, NULL, 'd' },
	{ "fir-order",    1, NULL, 'f' },
	{ "help",         0, NULL, 'h' },
	{ "mode",         1, NULL, 'm' },
	{ "output",       1, NULL, 'o' },
	{ "oversamp",     1, NULL, 'O' },
	{ "quiet",        0, NULL, 'q' },
	{ "refresh-rate", 1, NULL, 'R' },
	{ "samplerate",   1, NULL, 's' },
	{ "bps",          1, NULL, 'S' },
	{ "symrate",      1, NULL, 'r' },
	{ "version",      0, NULL, 'v' },
	{ "wait",         0, NULL, 'w' },
};


#endif

#include "GTP.h"
#include <iostream>
#include <string>
#include "Log.h"

// would be so much easier with reflection in c++... 
// 

GTP::GTP() {
}


GTP::~GTP() {
}

void GTP::run() {
	std::string line;
	Log::printf("starting.. ");

	// until the universe ends
	while (true) {
		// get line of input from stdin

		// parse cmd and pass to engine
		//		-> engine will pass move to apropriate player/AI
		//		update board
		//
		std::cin >> line;
		
		Log::printf("%s\n", line.c_str());

		line = "";
	}
}


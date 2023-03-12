#pragma once

#include <iostream>

// In order to turn off logging - comment this line below.
#define ENABLE_LOGGING


#ifdef ENABLE_LOGGING
#define LOG(STR) std::cout << STR << std::endl;
#else
#define LOG(STR)
#endif

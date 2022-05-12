#ifdef ISDEBUG
#define TP05_EX02_H

#include <iostream>
#define DEBUG(msg) { \
std::cerr<< " Debug(" <<__FILE__ <<", "<<__LINE__ <<") " << msg << std::endl; \
std::cerr.flush(); }
#else
#define DEBUG(msg)

#endif //TP05_EX02_H

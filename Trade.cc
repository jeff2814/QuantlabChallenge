#include "Trade.h"

Trade::Trade(unsigned long t, const std::string &s, unsigned long q, unsigned long p) : time(t),
                                                                                        symbol(s),
                                                                                        quantity(q),
                                                                                        price(p) {}
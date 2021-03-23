#pragma once
#include "Trade.h"
#include <string>
#include <fstream>
#include <vector>

// Handles the reading/parsing of data
class TradeReader{
public:
    TradeReader(const std::string &);
    ~TradeReader();

    bool hasNext();
    Trade next();
    std::vector<std::string> parse(const std::string& line);

private:
    std::ifstream fileStream;
};
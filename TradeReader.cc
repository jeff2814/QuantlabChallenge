#include "TradeReader.h"
#include "Trade.h"
#include <sstream>

TradeReader::TradeReader(const std::string &file){
    fileStream.open(file, std::ifstream::in);
}

TradeReader::~TradeReader(){
    if (fileStream.is_open()) {
        fileStream.close();
    }
}

bool TradeReader::hasNext() {
    return (fileStream.peek() != EOF);
}

Trade TradeReader::next(){
    std::string curr;
    std::getline(fileStream, curr);
    std::vector<std::string> parts = parse(curr);
    return Trade(stoul(parts[0]), parts[1], stoul(parts[2]), stoul(parts[3]));
}

std::vector<std::string> TradeReader::parse(const std::string& line){
    std::vector<std::string> result;
    std::string curr;
    std::stringstream s(line);
    while (std::getline(s, curr, ',')) {
        result.push_back(curr);
    }
    return result;
}
#include "TradeReader.h"
#include "Trade.h"
#include "Ticker.h"
#include <iostream>
#include <map>

using namespace std;

int main(int argc, char* argv[]) {
    
    TradeReader reader("input.csv");
    map<string, Ticker*> data; 

    while(reader.hasNext()) {
        auto curr = reader.next();
        if(!data.count(curr.getSymbol())){
            data[curr.getSymbol()] = new Ticker();
        }
        data[curr.getSymbol()]->update(curr);
    }

    std::ofstream fileOut("output.csv");
    for (auto const& i : data)
    {
        fileOut << i.first << "," 
            << i.second->getMaxTimeGap() << "," 
            << i.second->getTotalVolume() << ","
            << i.second->getWeightedAvgPrice() << ","
            << i.second->getMaxTradePrice() << ","
            << "\n";
    }
}
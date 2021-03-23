#pragma once
#include "Trade.h"

// Stores all the information of each traded symbol
class Ticker {
public:
    Ticker() : previouslyTraded(false), lastTime(0), maxTimeGap(0), totalVolume(0), maxTradePrice(0), totalMoney(0){}
    ~Ticker() = default;

    unsigned long getMaxTimeGap() const { return maxTimeGap; };
    unsigned long getTotalVolume() const { return totalVolume; };
    unsigned long getMaxTradePrice() const { return maxTradePrice; };
    unsigned long getWeightedAvgPrice() const { return totalMoney/totalVolume; };

    void update(Trade &t);

private:
    bool previouslyTraded;
    unsigned long lastTime;
    unsigned long maxTimeGap;
    unsigned long totalVolume;
    unsigned long maxTradePrice;
    unsigned long totalMoney;
    
};
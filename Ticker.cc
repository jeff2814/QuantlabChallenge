#include "Ticker.h"
#include "Trade.h"

void Ticker::update(Trade& t){
    if(!previouslyTraded) {
        previouslyTraded = true;
        lastTime = t.getTime();
    }
    if(maxTimeGap < t.getTime() - lastTime) {
        maxTimeGap = t.getTime() - lastTime;
    }
    totalVolume += t.getQuantity();
    if(t.getPrice() > maxTradePrice) {
        maxTradePrice = t.getPrice();
    }
    totalMoney += t.getPrice() * t.getQuantity();
}
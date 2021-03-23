#pragma once
#include <string>

class Trade{
public:
    Trade(unsigned long time, const std::string &sym, unsigned long qty, unsigned long price);
    ~Trade() = default;

    unsigned long getTime() const { return time; }
    std::string getSymbol() const { return symbol; }
    unsigned long getQuantity() const { return quantity; }
    unsigned long getPrice() const { return price; }

private:
    unsigned long time;
    const std::string symbol;
    unsigned long quantity;
    unsigned long price;
};
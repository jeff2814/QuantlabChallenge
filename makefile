.PHONY: build clean

Ticker.o: Ticker.cc Ticker.h
	g++ -std=c++11 -c Ticker.cc

TradeProcessor.o: TradeProcessor.cc TradeProcessor.h
	g++ -std=c++11 -c TradeProcessor.cc

Trade.o: Trade.cc Trade.h
	g++ -std=c++11 -c Trade.cc

TradeReader.o: TradeReader.cc TradeReader.h
	g++ -std=c++11 -c TradeReader.cc

build:  TradeProcessor.o Trade.o TradeReader.o Ticker.o
	g++ -std=c++11 -o TradeProcessor TradeProcessor.o Trade.o TradeReader.o Ticker.o

clean:
	rm -rf TradeProcessor *.o
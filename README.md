# QuantlabChallenge

To build use ```make build```
To run use ```./TradeProcessor```
To clean use ``` make clean```

Time Spent: 2hrs

Some things I would have done if I had more time:
* Flesh out TradeProcessor into a class (extendable)
* Write robust makefile (gdb, optimizations, etc.)
* Write unit tests and behavior driven tests

Some things I think would be implemented for production:
* Get data from multiple sources (make a thread per exchange, would require locks)
* Remember history of ticker by storing versions of ticker data 
* Flesh out Trade class to include more information
* Make Trades an abstract class (also for different exchanges)
* Currency Conversions
* Add ticker information to ticker (like float, market cap, etc.)

I received this exercise the day it was due (and I didn't open the email until evening lol) so I didn't have much time to brush up on c++ idioms or carefully design everything with templates. But I had a lot of fun with this project and I'm looking forward to hearing back from y'all :)
// This strategy will just buy as much of the stock as possible at the beginning and sell at the end
#include "../Interfaces/TradingStrategy.h"

class BuyAndHold: public TradingStrategy {

  public:
    BuyAndHold();
    int evaluate(char *argv[] ) = 0;
};

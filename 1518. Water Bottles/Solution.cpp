class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange)
    {
        int bottle = numBottles; 
        int drink = numBottles;
        while(bottle >= numExchange)
        {
            drink += bottle/numExchange;
            bottle = bottle/numExchange + bottle%numExchange;
        }
        return drink;
    }
};

# Explaination

1. int bottle = numBottles; - This line initializes a variable bottle to the number of bottles you start with.

2. int drink = numBottles; - This line initializes a variable drink to the number of bottles you start with, which is also the number of bottles you can drink initially.

3. while(bottle >= numExchange) - This is a loop that continues as long as you have enough empty bottles to exchange for a new full bottle.

4. Inside the loop:

  - drink += bottle/numExchange; - This line calculates how many new full bottles you can get by exchanging your empty bottles and adds that to the total number of bottles you can drink.
  - bottle = bottle/numExchange + bottle%numExchange; - This line updates the number of empty bottles you have. You get bottle/numExchange new full bottles and you still have bottle%numExchange empty bottles left over that you can't exchange.

5. return drink; - Once you can't exchange any more empty bottles for new full bottles, the loop ends and the function returns the total number of bottles you can drink.

For example, if you start with 9 bottles and you can exchange 3 empty bottles for a new full bottle, you can drink 13 bottles in total (9 initially, then 3 more, then 1 more).

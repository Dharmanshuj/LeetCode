# Explaination

This solution calculates the average waiting time for a chef in a restaurant. Here's a breakdown of how it works:

1. double wait = 0, time = 0; initializes two variables: wait to store the total waiting time and time to store the current time.

2. The loop for(auto pair : customers) iterates over each customer in the customers vector.

3. Inside the loop, there's a conditional statement if(time > pair[0]). This checks if the current time time is greater than the arrival time of the customer pair[0].

    - If time is greater than pair[0], it means the chef is already busy when the customer arrives. In this case, the waiting time for this customer is time - pair[0], which is the time the chef was busy before the customer arrived. This waiting time is added to the total waiting time wait.

    - If time is not greater than pair[0], it means the chef is not busy when the customer arrives. In this case, the chef starts preparing the order immediately, so there's no waiting time for this customer. The current time time is updated to the arrival time of the customer pair[0].

4. wait += pair[1]; adds the preparation time of the order pair[1] to the total waiting time wait. This is because the customer has to wait for the order to be prepared.

5. time += pair[1]; updates the current time time by adding the preparation time of the order pair[1]. This is because the chef is busy preparing the order for this amount of time.

6. After the loop, double result = wait / customers.size(); calculates the average waiting time by dividing the total waiting time wait by the number of customers customers.size().

7. Finally, return result; returns the average waiting time.

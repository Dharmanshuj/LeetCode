## Explaination
- The threeConsecutiveOdds function takes a vector<int> arr as input.
- It initializes a counter count to 0, which will keep track of the number of consecutive odd numbers.
- It iterates through the array using a range-based for loop (for (int num : arr)).
- For each element num in the array, it checks if it's odd by using the modulo operator (num % 2!= 0).
- If num is odd, it increments the count variable. If count reaches 3, it returns true, indicating that three consecutive odd numbers have been found.
- If num is even, it resets the count variable to 0, effectively restarting the count.
- If the loop completes without finding three consecutive odd numbers, it returns false.

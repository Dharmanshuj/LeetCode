# Explaination

1. Create an unordered map h to store the height as the key and the index of the person in the names vector as the value. This is done to keep track of the original index of each person.

2. Sort the heights vector in descending order using the sort function and a lambda function as the comparator. This is done to get the heights in descending order.

3. Create a result vector result to store the sorted names.

4. Iterate through the sorted heights vector and use the h map to get the original index of each person. Use this index to access the corresponding name in the names vector and add it to the result vector.

5. Return the result vector, which now contains the names of the people sorted by their heights in descending order.

# Explaination

**The solution uses a vector result to store the sums of nodes between zeros. It also uses a variable sum to accumulate the sum of nodes between zeros.**

### Here's the step-by-step explanation:

- The function first checks if the input linked list is empty or only contains one node. If so, it returns NULL because there's nothing to merge.

- It then initializes an empty vector result to store the sums of nodes between zeros, and a variable sum to 0.

- The function then iterates through the linked list using a while loop.

- Inside the loop, it checks if the current node's value is 0. If it is, it means we've reached the end of a sequence of nodes between zeros. If sum is non-zero, it adds sum to the result vector and resets sum to 0.

- If the current node's value is not 0, it adds the value to sum. This accumulates the sum of nodes between zeros.

- After iterating through the entire linked list, the function creates a new linked list with the sums stored in the result vector.

- It then returns the new linked list.

**Time Complexity:** O(n), where n is the number of nodes in the input linked list.

**Space Complexity:** O(m), where m is the number of sequences of nodes between zeros. In the worst case, m could be n/2, so the space complexity is O(n) in the worst case.

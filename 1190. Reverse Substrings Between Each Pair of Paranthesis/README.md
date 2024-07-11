# Explaination

1. Initialize an empty stack st and an empty temporary string temp.

2. Iterate through the input string s character by character:
    - If the current character is an opening parenthesis (:
      - Push the current temp string onto the stack st.
      - Reset temp to an empty string.
    - If the current character is a closing parenthesis ):
      - Reverse the current temp string using the std::reverse algorithm.
      - Pop the top string from the stack st and concatenate it with the reversed temp string.
      - Assign the resulting string back to temp.
    - If the current character is not a parenthesis:
      - Simply append the character to the temp string.

3. After iterating through the entire input string, the final temp string will contain the reversed characters within each pair of parentheses.

4. Return the final temp string as the result.

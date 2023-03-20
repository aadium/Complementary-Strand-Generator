# Complementary Strand Generator

This code is written in C++ and it takes an input DNA sequence from the user and generates the complementary DNA strand for it.

First, the program declares two character arrays: user_input and user_output, both of size 10,000. It then prompts the user to enter a DNA sequence by displaying "Enter the DNA sequence: " on the console.

The program reads in the user input character by character, using cin.get(), until it encounters a newline character \n or until the user input limit of 10,000 characters is reached. The input characters are stored in the user_input array.

Then, the program iterates through the user_input array to generate the complementary strand for the DNA sequence. It does this by checking each character in the user_input array, and based on its value, assigns its complementary value to the corresponding character in the user_output array. Specifically, it assigns C to G, T to A, G to C, and A to T. If any other character is found in the user_input array, it sets invalid_input to true.

If invalid_input is true, the program outputs "Invalid DNA strand input." and exits with an error code of -1.

If invalid_input is false, the program outputs the complementary strand stored in the user_output array by displaying "Complementary strand: " followed by the complementary strand. Finally, the program exits with a success code of 0.
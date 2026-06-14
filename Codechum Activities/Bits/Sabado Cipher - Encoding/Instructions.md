# [//] - Sabado Cipher - Encoding by Janie Lane Sabado

## Background:
 

Janie is going back to Davao for All Soul's day and her boyfriend is there to pick her up from the airport. Her boyfriend asked if there is anything she would want as a gift when she arrives and she decides that she wants to encode the message for her boyfriend. She wants to be able to convert an 8 letter word into a series of 4 integer values. Now you must help Janie in encoding the message.

 

## Objective:
 

Create the three functions that is necessary in encoding the message in the file encode.c

1. int* encodeString(char string[]) - this function takes the string and returns a bit vector array
2. short int* arrayToBitmask(int arr[]) - this function takes the bit vector array and returns a set of integers
3. void displayBitPattern(int arr[]) - this function displays the bit pattern of the bit vector array
 

## Notes:
1. Bit vector array is where each index of the array represents a boolean value: 0 or 1
2. Remember a short integer is 16 bits, given the characters 'Y' and 'O' is represented as 01011001 and 01001111 respectively, together they represent the short integer 22863

## Encoding Guide:
Given the two characters 'Y' and 'O', it is represented in bits as 01011001 and 01001111 respectively. Those bits are then stored in a bit vector array and then converted to represent a short integer value.
```
char letters[2] = {'Y','O'}

bit representation: 01011001 01001111
     short integer: 22863
```

---

### Sample Output 1
```
=== Sabado Cipher ===

Given the 8 letter word, encode the string into an array of short int
EARRINGS

Enter test case choice:
1. Convert the characters into a bit vector Array
2. Encode the String using the converted bit vector Array
3. Convert and Encode while displaying both

Choice: 1

Bit Pattern:
01000101 01000001 01010010 01010010 01001001 01001110 01000111 01010011
Sample Output 2

=== Sabado Cipher ===

Given the 8 letter word, encode the string into an array of short int
EARRINGS

Enter test case choice:
1. Convert the characters into a bit vector Array
2. Encode the String using the converted bit vector Array
3. Convert and Encode while displaying both

Choice: 3

Bit Pattern:
01000101 01000001 01010010 01010010 01001001 01001110 01000111 01010011

Encoded Message:
17729 21074 18766 18259
```
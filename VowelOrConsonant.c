//Author:Arjit Manhas
//Creation Date:18/3/2021
//Last Modification:18/3/2021
//Purpose Of The Program: Check whether the alphabet is a vowel or consonant
#include <stdio.h>
int main(){
    char c;//Declaring a variable c of datatype char
    int lowercase_vowel, uppercase_vowel;//Declaring variables lowercase_vowel, uppercase_vowel of datatype int
    printf("Enter an alphabet: ");
    scanf("%c", &c);//Taking user input in char data type

    //Evaluates to 1 if variable c is a lowercase vowel
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    //Evaluates to 1 if variable c is a uppercase vowel
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    //Evaluates to 1 (true) if c is a vowel
    if (lowercase_vowel || uppercase_vowel)//if statement
        printf("%c is a vowel.", c);//If statement , Alphabet is a vowel
    else
        printf("%c is a consonant.", c);//Else statement, Above statement is false
    return 0;
}

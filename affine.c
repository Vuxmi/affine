#include <stdio.h>

#include <string.h>

#include <ctype.h>

// Define keys

int a = 5;

int b = 7;


char encryptChar(char ch) 
{
    if (isalpha(ch)) 
    {

    char base = isupper(ch) ? 'A' : 'a';

    return (char)(((a * (ch - base) + b) % 26) + base);

    }

     else

    {

     return ch;

    }

}

int main() 
{

 char message[] = "minhvu";

 char encrypted[100];


 for (int i = 0; i < strlen(message); i++) 
 {

 encrypted[i] = encryptChar(message[i]);

 }

 encrypted[strlen(message)] = '\0';

 printf("Original message: %s\n", message);

 printf("Encrypted message: %s\n", encrypted);

}
//program for to check string palindrome
//pratiksha chokhar

#include<stdio.h>
#include<string.h>

void Palindrome(char str[]) 
{ 
    
    int i = 0; 
    int j = strlen(str) - 1; 
  


    while (j > i) 
    { 
        if (str[i++] != str[j--]) 
        { 
            printf("%s is Not Palindrome\n", str); 
            return; 
        } 
    } 
    printf("%s is palindrome\n", str); 
}
int main() 
{ 
    Palindrome("pqr"); 
    Palindrome("madam"); 
    //Palindrome("geeks"); 
    return 0; 
}

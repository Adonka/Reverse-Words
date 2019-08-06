// CPP program to reverse a string 
#include <stdio.h> 
  
// Function to reverse any sequence 
// starting with pointer begin and 
// ending with pointer end 
void reverse(char* begin, char* end) 
{ 
    char te; 
    while (begin < end) { 
        te = *begin; 
        *begin++ = *end; 
        *end-- = te; 
    } 
} 
  
// Function to reverse words*/ 
void reverseWords(char* s) 
{ 
    char* word_begin = s; 
  
    // Word boundary 
    char* t = s; 
  
    // Reversing individual words as 
    // explained in the first step 
    while (*t) { 
        t++; 
        if (*t == '\0') { 
            reverse(word_begin, t - 1); 
        } 
        else if (*t == ' ') { 
            reverse(word_begin, t - 1); 
            word_begin = t + 1; 
        } 
    } 
  
    // Reverse the entire string 
    reverse(s, t - 1); 
} 
  
// Driver Code 
int main() 
{ 
    char s[] = "today is hot ..."; 
    char* temp = s; 
    reverseWords(s); 
    printf("%s", s); 
     }
#include <stdio.h>
#include <string.h>

char* s = "abcabcbb";

int lengthOfLongestSubstring(char* s) {
    int s_len = strlen(s);
    char* start = s;
    char* end = s + s_len; // Put the end reference at the '\0'
    int count = 1;
    for(int i = 0; i < s_len; i++)
    {
        for (int n = 1; start + n != end; n++)
        {
            if (*start != *(start + n))
            {
                count++;
            }
            else
            {
                start++;
                count = 1;
                break;
            }
        }
    }
    printf("%c\n", *end);
    return 0;
}

int main() {
    // Your code goes here
    printf("Hello, world!\n"); //Example
    printf("%ld\n", strlen(s));
    lengthOfLongestSubstring(s);
    return 0;
}
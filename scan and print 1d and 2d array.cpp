#include<stdio.h>
int areAnagram(char* str1, char* str2)
{
    // Create 2 count arrays and initialize
    // all values as 0
    int count1[NO_OF_CHARS] = {0};
    int count2[NO_OF_CHARS] = {0};
    int i;
 
    // For each character in input strings,
    // increment count in the corresponding
    // count array
    for (i = 0; str1[i] && str2[i]; i++)
    {
    	count1[str1[i]]++;
        count2[str2[i]]++;
    }
  if (str1[i] || str2[i])
        return 0;
 
    // Compare count arrays
    for (i = 0; i < NO_OF_CHARS; i++)
        if (count1[i] != count2[i])
            return 0;
 
    return 1;
    int main()
{
    char str1[] = "geeksforgeeks";
    char str2[] = "forgeeksgeeks";
   
    // Function Call
    if (areAnagram(str1, str2))
        printf(
        "The two strings are anagram of each other");
    else
        printf("The two strings are not anagram of each "
               "other");
    return 0;
}
}
 
}
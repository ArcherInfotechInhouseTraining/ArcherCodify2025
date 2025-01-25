#include <stdio.h>
#include <string.h>

int compute(const char *str1, const char *str2) 
{
    if (str1 == NULL || str2 == NULL) 
    {
        return -1;  
    }
    
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    
    if (len1 != len2)
    {
        return -1;  
        
    }

    int d = 0;  
    
    for (int i = 0; i < len1; i++) 
    {
        if (str1[i] != str2[i]) 
        {
            d++;  
            
        }
    }

    return d;  
    
}

int main() 
{
    
    const char *str1 = "karolin";
    const char *str2 = "kathrin";
    
    
    int d = compute(str1, str2);
    
     
    if (d == -1)
    {
        printf("Error: Strings are either not of equal length or invalid input.\n");
    } 
    else 
    {
        printf("The Hamming distance is: %d\n", d);
    }

    return 0;   
}

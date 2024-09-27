#include <stdio.h>
#include <string.h>  // for fgets()

#define SIZE 1000

// Function prototypes
int mystrlen(char *s);
char* strAux(char *s);

int main()
{
    char str[SIZE];
    
    
    printf("Enter a string: \n");
    
   
    fgets(str, SIZE, stdin);

    
    str[strcspn(str, "\n")] = '\0';
    
    // Display the length of the string
    printf("The length of the string is: %d\n", mystrlen(str));
    
    // Display the string sorted in ascending order
    printf("Sorted string: %s\n", strAux(str));

    return 0;
}

// Function to find the length of a string (similar to strlen)
int mystrlen(char *s)
{
    int length = 0;
    
    while (s[length] != '\0')
    {
        length++;
    }
    
    return length;
}

// Function to sort the string in ascending order
char* strAux(char *s)
{
    char temp;
    int i, j;
    int len = mystrlen(s);
    
    // Bubble sort algorithm to sort the string
    for (i = 1; i < len; i++)
    {
        for (j = 0; j < len - i; j++)
        {
            if (s[j] > s[j + 1])
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    
    return s;
}

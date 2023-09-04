#include <stdlib.h>
#include "main.h"

/**
 * strtow - Splits a string into words
 * @str: The string to be split
 *
 * Return: Pointer to the array of split words
 */
char **strtow(char *str)
{
    char **split;
    int i, j = 0, temp = 0, size = 0, words = num_words(str);

    if (words == 0)
        return (NULL);

    split = (char **)malloc(sizeof(char *) * (words + 1));

    if (split != NULL)
    {
        for (i = 0; i <= len(str) && words; i++)
        {
            if ((str[i] != ' ') && (str[i] != '\0'))
                size++;
            else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
            {
                split[j] = (char *)malloc(sizeof(char) * size + 1);

                if (split[j] != NULL)
                {
                    while (temp < size)
                    {
                        split[j][temp] = str[(i - size) + temp];
                        temp++;
                    }
                    split[j][temp] = '\0';
                    size = temp = 0;
                    j++;
                }
                else
                {
                    while (j-- >= 0)
                        free(split[j]);
                    free(split);
                    return (NULL);
                }
            }
        }
        split[words] = NULL;
        return (split);
    }
    else
    {
        return (NULL);
    }
}

/**
 * num_words - Counts the number of words in str
 * @str: The string to be used
 *
 * Return: Number of words
 */
int num_words(char *str)
{
    int i = 0, words = 0;

    while (i <= len(str))
    {
        if ((str[i] != ' ') && (str[i] != '\0'))
        {
            i++;
        }
        else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
        {
            words += 1;
            i++;
        }
        else
        {
            i++;
        }
    }
    return (words);
}

/**
 * len - Returns length of str
 * @str: The string to be counted
 *
 * Return: Length of the string
 */
int len(char *str)
{
    int length = 0;

    if (str != NULL)
    {
        while (str[length])
            length++;
    }
    return (length);
}

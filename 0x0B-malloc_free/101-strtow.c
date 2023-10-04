#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - count the number of words in a string
 * @str: input string
 * Return: number of words
 */
int count_words(char *str)
{
    int num = 0;
    while (*str)
    {
        if (*str == ' ')
        {
        str++;
        }
        else
        {
            num++;
            while (*str && *str != ' ')
            {
                str++;
            }
        }
    }
    return num;
}

/**
 * free_everything - free dynamically allocated memory
 * @words: array of strings
 * @total_words: total number of words
 */
void free_everything(char **words, int total_words)
{
    for (int i = 0; i < total_words; i++)
    {
        free(words[i]);
    }
    free(words);
}

/**
 * strtow - split a string into words
 * @str: input string
 * Return: array of words
 */
char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
    {
        return NULL;
    }

    int total_words = count_words(str);
    if (total_words == 0)
    {
        return NULL;
    }

    char **words = malloc((total_words + 1) * sizeof(char *));
    if (words == NULL)
    {
        return NULL;
    }

    int b = 0;
    while (*str && b < total_words)
    {
        if (*str == ' ')
        {
            str++;
        }
        else
        {
            char *found_word = str;
            int length = 0;
            while (*str && *str != ' ')
            {
                length++;
                str++;
            }

            words[b] = malloc((length + 1) * sizeof(char));
            if (words[b] == NULL)
            {
                free_everything(words, b);
                return NULL;
            }

            for (int c = 0; c < length; c++)
            {
                words[b][c] = found_word[c];
            }
            words[b][length] = '\0';

            b++;
        }
    }

    words[total_words] = NULL;
    return words;
}

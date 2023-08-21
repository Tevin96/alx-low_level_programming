#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a])
		a++;
	return (a);
}

/**
 * copy_word - copies a word from a string
 * @str: string to copy from
 * @start: start index
 * @end: end index
 * Return: pointer to word
 */
char *copy_word(char *str, int start, int end)
{
	char *word;
	int a;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);

	for (a = 0; a < end - start; a++)
		word[a] = str[start + a];
	word[a] = '\0';

	return (word);
}

/**
 * count_words - counts the number of words in a string
 * @str: string
 * Return: number of words
 */
int count_words(char *str)
{
	int word_count = 0, str_len, a;

	if (!str || !str[0])
		return (0);

	str_len = _strlen(str);

	for (a = 0; a < str_len; a++)
	{
		if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			word_count++;
	}

	return (word_count);
}

/**
 * free_words - frees an array of words
 * @words: array
 * @word_count: number of words
 * Return: 0 (success)
 */
void free_words(char **words, int word_count)
{
	int a;

	for (a = 0; a < word_count; a++)
		free(words[a]);
	free(words);
}

/**
 * strtow - splits a string into words
 * @str: string
 * Return: a pointer to an array of strings (words)
 * NULL
 * NULL if str == NULL or str == ""
 * NULL if function fails
 */
char **strtow(char *str)
{
	char **words;
	int word_count, str_len, start = 0, end, index = 0, a;

	word_count = count_words(str);
	if (!word_count)
		return (NULL);

	words = malloc(sizeof(char *) * (word_count + 1));
	if (!words)
		return (NULL);

	str_len = _strlen(str);
	for (a = 0; a < str_len; a++)
	{
		if (str[a] != ' ' && (str[a + 1] == ' ' || !str[a + 1]))
		{
			end = a + 1;
			words[index] = copy_word(str, start, end);
			if (!words[index])
				return (free_words(words, index), NULL);
			index++;
		} else if (str[a] != ' ' && str[a + 1] != ' ')
			continue;
		else
			start = a + 1;
	}

	return (words);
}

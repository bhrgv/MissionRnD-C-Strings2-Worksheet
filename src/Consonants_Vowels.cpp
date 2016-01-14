/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>
int isVowel(char c)
{
	switch (c)
	{
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
		return 1;
		break;
	default:
		return 0;
	}
}
void count_vowels_and_consonants(char *str,int *consonants, int *vowels){
	int ccount = 0;
	int vcount = 0;
	if (str != NULL)
	{
		for (int i = 0; str[i] != '\0'; i++)
		{
			int ascii = (int)str[i];
			if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122))
			{
				if (isVowel(str[i]))
					vcount++;
				else
					ccount++;
			}
		}
	}
	*consonants = ccount;
	*vowels = vcount;
}

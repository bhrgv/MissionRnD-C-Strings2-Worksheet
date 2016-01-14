/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
int stringLength(char* str)
{
	int i = 0;
	while (str[i] != '\0'){ i++; }
	return i;
}
int* getIndex(char* str)
{
	int* result = (int*)malloc(2 * sizeof(int));
	int length = stringLength(str)-1;
	while (str[length] == ' '&&length!=-1){ length--; }
	result[1] = length;
	if (length == -1)
		return result;
	while (str[length] != ' '&&length!=-1){ length--; }
	result[0] = length + 1;
	return result;
}
char * get_last_word(char * str){
	int *index = getIndex(str);
	int i = 0;
	char* result;
	if (index[1] == -1)
	{
		result = (char*)malloc(sizeof(char));
		result[0] = '\0';
		return result;
	}
	else
	{
		result = (char*)malloc((index[1] - index[0] + 2)*sizeof(char));
		int i = index[0];
		int z = 0;
		while (i <= index[1])
		{
			result[z++] = str[i++];
		}
		result[z] = '\0';
		return result;
	}
	return NULL;
}

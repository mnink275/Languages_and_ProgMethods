#include <iostream>

int strlen(char* p)
{
	char* q = p;
	while(*++q); // Почему сначала разыменовывается p, а потом значение инкрементируется, а не наоборот?
	return q - p;
}

int main()
{   
	char ch[4] = "abc";
	char* p = ch;
	std::cout << strlen(p) << std::endl;

	return 0;
}

#include<string.h>
#include <ctype.h>
#include<stdio.h>
#include <stdlib.h>


int main() {
    char*s;
    s=ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15);
    printf("%s\n",s);
    s=ft_strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum", 35);
	printf("%s\n",s);
	s=ft_strnstr("lorem ipsum dolor sit amet", "", 10);
	printf("%s\n",s);
    s=ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30);
	printf("%s\n",s);
	s=ft_strnstr("lorem ipsum dolor sit amet", "dol", 30);
	printf("%s\n",s);
    s=ft_strnstr("lorem ipsum dolor sit amet", "consectetur", 30);
	printf("%s\n",s);
	s=ft_strnstr("lorem ipsum dolor sit amet", "sit", 10);
	printf("%s\n",s);
	s=ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15);
	printf("%s\n",s);
	s=ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0);
    printf("%s\n",s);
    return 0;
}

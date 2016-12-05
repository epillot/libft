#include "libft.h"

int main()
{
	int a = 9654;
	ft_print_memory(&a, 4);
	char *s = "salut les amiches cest cool showmem on fait detruc terribl";
	ft_print_memory(s, ft_strlen(s));
}

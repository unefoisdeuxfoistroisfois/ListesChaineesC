#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*noeud;

	noeud = malloc(sizeof(t_list));
	if (noeuf == NULL)
		return NULL;
}

t_list	*ft_lstnew(void *stock)
{
	t_list	*noeud;

	noeud = malloc(sizeof(t_list));
	if (noeud == NULL)
		return NULL;

	noeud->content = stock;
	noeud->next = NULL;

	return (noeud);
}

int	main()
{
	char	*mot;
	t_list	*res;

	mot = "Bradley"

	res = ft_lstnew(mot);

	prinf("%s", (char*)res->content);

	free(res);
	return (0);
}

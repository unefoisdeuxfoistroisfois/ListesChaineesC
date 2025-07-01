#include <stdio.h>
#include <stdlib.h>
#include "list.h"

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
	t_list	*resultats;

	mot = "Bradley";
	resultats = ft_lstnew(mot);

	printf("%s", (char*)resultats->content);

	free(resultats);
	return (0);
}

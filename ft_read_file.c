/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:33:58 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/13 16:16:22 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static t_list		*ft_file_to_lst(int fd, int flags);
static unsigned int	ft_get_str_size(t_list *node);
static char			*ft_lst_to_str(t_list *node);

void	*ft_read_file(int fd, int flags)
{
	union u_read	u;

	if (fd < 0)
		return (NULL);
	u.lst = ft_file_to_lst(fd, flags);
	if (!u.lst)
		return (NULL);
	if (!(flags & FT_STR))
		return (u.str);
	u.str = ft_lst_to_str(u.lst);
	return (u.lst);
}

static char	*ft_lst_to_str(t_list *node)
{
	unsigned int	size;
	t_list			*aux;
	char			*str;
	int				i;

	size = ft_get_str_size(node);
	if (node == 0)
		return (NULL);
	str = ft_calloc(size + 1, sizeof(char));
	i = 0;
	while (node)
	{
		aux = node;
		ft_memmove(&str[i], node->content, ft_strlen(node->content));
		i += ft_strlen(node->content);
		node = node->next;
		free(aux->content);
		free(aux);
	}
	return (str);
}

static unsigned int	ft_get_str_size(t_list *node)
{
	unsigned int	i;

	i = 0;
	while (node)
	{
		i += ft_strlen(node->content);
		node = node->next;
	}
	return (i);
}

static t_list	*ft_file_to_lst(int fd, int flags)
{
	t_list	*node;
	t_list	*head;
	char	*line;
	char	*aux;

	if (fd < 0)
		return (NULL);
	head = NULL;
	line = get_next_line(fd);
	while (line)
	{
		if ((flags & FT_NON) && (line[ft_strlen(line) - 1] == '\n'))
		{
			aux = line;
			line = ft_substr(line, 0, ft_strlen(line) - 1);
			free(aux);
		}
		node = ft_lstnew(line);
		if (!node)
			return (ft_lstclear(&head, free), NULL);
		ft_lstadd_back(&head, node);
		line = get_next_line(fd);
	}
	return (head);
}

/*
int main(void)
{

	int 	fd;
	t_list	*str;

	fd = open("./oie", O_RDWR);
	str = ft_read_file(fd, FT_LST | FT_NON);
	ft_lstclear(&str, free);
	close(fd);
	return (0);
}
*/

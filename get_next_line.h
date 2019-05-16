/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dewalter <dewalter@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/12 19:37:38 by dewalter     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/12 21:10:46 by dewalter    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 9999
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include "libft.h"

typedef struct			s_fd
{
	int					fd;
	char				*save;
	int					ret;
	char				*tmp;
	char				buf[BUFF_SIZE + 1];
	struct s_fd			*next;
}						t_fd;

int						get_next_line(const int fd, char **line);

#endif

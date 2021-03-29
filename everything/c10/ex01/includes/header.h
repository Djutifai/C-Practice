#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <libgen.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>
# define BUF_SIZE 30000

int			ft_strlen(char *str);
void		ft_display_file(char *filepath, char *outname);
int			ft_strcmp(char *s1, char *s2);
void		ft_readinput(char *output, char *argv);
void		ft_display_error(int errn, char *outname, char *argv);
void		ft_putstr(char *str);
#endif

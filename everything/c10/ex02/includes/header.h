#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <string.h>
# include <libgen.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>
# define BUF_SIZE 30000

void		ft_enable_flag(char *flag, char *outfile, int *bytes);
int			ft_strlen(char *str);
void		ft_putchar(char c);
void		ft_display_file(char *path, char *outname, int *flag, int *byt);
int			ft_strcmp(char *str1, char *str2);
void		ft_display_error(int errn, char *outname, char *argv);
void		ft_putstr(char *str);
void		ft_illegal_offset(char *offset, char *outfile);
void		ft_make_number(char *flag, int *bytes);
void		ft_print_tail(char *file, char *outfile, int flag, int byte);
#endif

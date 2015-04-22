/*
** my_strstr.c for  in /home/maslak_f/SVNJ08/maslak_f/my_strstr
** 
** Made by MASLAK Franck
** Login   <maslak_f@etna-alternance.net>
** 
** Started on  Sat Mar 28 17:15:01 2015 MASLAK Franck
** Last update Mon Mar 30 19:12:42 2015 MASLAK Franck
*/

int	bou(int i, char *str, char *to_find)
{
  int j;

  j = 0;
  while (*(str + i) == *(to_find + j))
    {
      i ++;
      j ++;
    }
  if (*(to_find + j) == '\0')
    return (1);
  else
    return (0);
}

char	*my_strstr(char *str, char *to_find)
{
  int i;
  int fin;
  int j;

  i = 0;
  fin = 0;
  while ((*(str + i) != '\0') && (fin == 0))
    {
      if (*(str + i) == *(to_find + 0))
	{
	  j = 0;
	  fin = bou(i, str, to_find);
	  if (fin == 1)
	    return ((str + i));
	}
      i ++;
    }
  return ("null");
}

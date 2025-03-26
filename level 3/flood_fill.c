#include <stdio.h>
#include <stdlib.h>

typedef struct  s_point
{
  int           x;
  int           y;
}               t_point;

void fill(char **tab, t_point size, t_point current, char to_fill)
{
    if (current.y < 0 || current.x < 0 || current.y >= size.y || current.x >= size.x || tab[current.y][current.x] != to_fill)
        return ;
    
    tab[current.y][current.x] = 'F';  

    fill(tab, size, (t_point){current.x + 1, current.y}, to_fill);
    fill(tab, size, (t_point){current.x - 1, current.y}, to_fill);
    fill(tab, size, (t_point){current.x, current.y + 1}, to_fill);
    fill(tab, size, (t_point){current.x, current.y - 1}, to_fill);
}
void flood_fill(char **tab, t_point size, t_point begin)
{
    char to_fill = tab[begin.y][begin.x]; 
    fill(tab, size, begin, to_fill); 
}

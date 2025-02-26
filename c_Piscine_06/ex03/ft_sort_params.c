#include <unistd.h>
#include <string.h>

int ft_strlen(char *str)
{
        int index;

        index = 0;
        while (*str)
        {
                index++;
                str++;
        }
        return index;

        strdup();
}

void swap(char *tab, int largest, int lastunsortedindex)
{
        char temp;

        temp = tab[lastunsortedindex];
        tab[lastunsortedindex] = tab[largest];
        tab[largest] = temp;
}

void ft_sort_char_tab(char *tab, int size)
{
        int i;
        int lastunsortedindex;
        int largest;

        lastunsortedindex = size - 1;
        while (lastunsortedindex > 0)
        {
                largest = 0;
                i = 1;
                while (i <= lastunsortedindex)
                {
                        if (tab[i] > tab[largest])
                        {
                                largest = i;
                        }
                        i++;
                }
                swap(tab, largest, lastunsortedindex);
                lastunsortedindex--;
        }
}

int main(int argc, char **argv)
{
        int     i;
        int     j;
        int     size;

        i = 1;
        while (i < argc)
        {
                size = ft_strlen(argv[i]);
                ft_sort_char_tab(argv[i], size);
                j = 0;
                while (argv[i][j] != '\0')
                {
                        write (1, &argv[i][j], 1);
                        j++;
                }
                if(i + 1 < argc)
                        write (1, "\n", 1);
                i++;
        }
}

#include "../inc/philo.h"



int main(int ac, char **av)
{
    t_table table;

    if (ac < 5 || ac > 6)
    {
        if (ac < 5)
            ft_error("Error: too few arguments", NULL);
        if (ac > 6)
            ft_error("Error: too many arguments", NULL);
        return (1);
    }
    if (ft_parsing(ac, av))
        return (1);
        ft_init(ac, av, table);
}
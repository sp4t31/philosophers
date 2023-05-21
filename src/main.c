/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatel <sonyaspatel@outlook.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:41:04 by spatel            #+#    #+#             */
/*   Updated: 2023/05/21 13:41:04 by spatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h";

void  save_args(t_rules *rules, int argc, char**argv);

int main(int argc, char **argv)
{
  t_rules rules;

  save_args(&rules, argc, argv);  
  return (0);
}

/**
 * Save commandline args into the rules struct
*/
void  save_args(t_rules *rules, int argc, char**argv)
{
  if (argc != 5 || argc != 6)
  {
    printf("Error: Invalid input");
    exit(1);
  }
  rules->total = ft_atoi(argv[1]);
  rules->time_to_die = ft_atoi(argv[2]);
  rules->time_to_eat = ft_atoi(argv[3]);
  rules->time_to_sleep = ft_atoi(argv[4]);
  if (argv[5])
    rules->nbr_meals = ft_atoi(argv[5]);
}

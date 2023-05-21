/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatel <sonyaspatel@outlook.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:50:33 by spatel            #+#    #+#             */
/*   Updated: 2023/05/21 13:50:33 by spatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

#include <stddef.h> //NULL
#include <stdlib.h> //malloc
#include <stdio.h> //printf
#include <pthread.h> //threads

typedef struct s_rules
{
  int total;
  int time_to_die;
  int time_to_eat;
  int time_to_sleep;
  int nbr_meals;
}     t_rules;

// For each philosopher
typedef struct s_philo
{
  int nbr;
  int meals_left;
}     t_philo;

int main(int argc, char **argv);


int	ft_atoi(const char *str);

#endif
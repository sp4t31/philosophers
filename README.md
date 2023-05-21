# Philosophers
A 42 school project on concurrent programming in C

## A bit of context

- Philosophers can only eat, think and sleep (and only one at a time)
- The philosophers sit at a round table, in the middle lies delicious noodles
- For `n` number of philosophers, there are `n` forks
- Each philosopher needs 2 forks to eat, therefore they must take turns
- If a philosopher hasn't eaten any noodles after a specified amount of time, they will die

For the full project brief, see the subject.pdf file.

## Running the project

1. Build the project by running `make`

2. Run the project and specify the rules of the game

```
./philo [nbr_of_philosophers] [time_to_die] [time_to_eat] [time_to_sleep] [optional - nbr_meals]
```

-`time_to_die` (in milliseconds): If a philosopher didn’t start eating `time_to_die` milliseconds since the beginning of their last meal or the beginning of the simulation, they die.
- `time_to_eat` (in milliseconds): The time it takes for a philosopher to eat. During that time, they will need to hold two forks.
- `time_to_sleep` (in milliseconds): The time a philosopher will spend sleeping.
- `nbr_meals` (optional argument): If all philosophers have eaten at least `nbr_meals` times, the simulation stops. If not specified, the simulation stops when a philosopher dies.
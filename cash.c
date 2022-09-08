#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main(void)
{

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);
int cents, quarters, dimes, nickels, pennies, coins;

    int get_cents(void); // Ask how many cents the customer is owed
{

    do {
    cents = get_int("Cents owed: ");
    }
    while (cents < 0);
    return cents;
}

    int calculate_quarters(int cents); // Calculate the number of quarters to give the customer
{
    quarters = 0;
    while (cents >= 25)
    {
    quarters++;
    cents = cents - 25;
    }
    return quarters;
}

    int calculate_dimes(int cents); // Calculate the number of dimes to give the customer
{
    dimes = 0;
    while (cents >= 10)
    {
    dimes++;
    cents = cents - 10;
    }
    return dimes;
}

    int calculate_nickels(int cents); // Calculate the number of nickels to give the customer
{
    nickels = 0;
    while (cents >= 5)
    {
    nickels++;
    cents = cents - 5;
    }
    return nickels;
}

    int calculate_pennies(int cents);   // Calculate the number of pennies to give the customer
{
    pennies = 0;
    {
    while (cents >= 1)
    pennies++;
    cents = cents - 1;
    }
    return pennies;

    {
    coins = quarters + dimes + nickels + pennies; // Sum coins
    }

    printf("%i\n", coins); // Print total number of coins to give the customer

}
}


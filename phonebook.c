#include <stdio.h>
#include <cs50.h>

int main(void)
{

    {
        string name = get_string("Enter your name: ");
        int age = get_int("Enter your age: ");
        long phone = get_long("Enter your phone number: ");


        {
            printf("Your name is %s\n. Your age is %i\n. Your phone number is %li\n", name, age, phone);
           // printf("Your age is %i\n", age);
            //printf("Your phone number is %li\n", phone);
        }
    }

}
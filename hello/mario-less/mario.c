#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int block;
    do
    {
        block = get_int("Enter pyramid height: ");
    }
    while (block < 1 || block > 8);

    for (block = 0; block < 8; block++)
        {
            printf("#");

                    for (int block_2 = ; block_2 < 8; block_2++)
                        {
                            printf("#\n");
                        }
        }

}


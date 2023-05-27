#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define BLOCK_SIZE 512
int number = 0;
FILE *IMAGE = NULL;

int main(int argc, char *argv[])
{

    // Ensure 1 command line argument

    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }

    // Open file using fopen in read mode

    FILE *jpeg = fopen(argv[1], "r");

    // If file cannot be opened print error message

    if (jpeg == NULL)
    {
        printf("Cannot be opened\n");
        return 1;
    }

    // Make an array/ buffer file to store data from file

    uint8_t buffer[BLOCK_SIZE];

    char image_1[8];

    // Read file

    while (fread(buffer, 1, BLOCK_SIZE, jpeg) == BLOCK_SIZE)
    {
        // Check for signature

        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            //char *image_1 = NULL;
            sprintf(image_1, "%03i.jpg", number);
            FILE *IMAGE = fopen(image_1, "w");
            number++;

            fwrite(&buffer, 1, BLOCK_SIZE, IMAGE);

            fclose(IMAGE);

        }
        if (!(number == 0))
        {
            
        }

    }




}
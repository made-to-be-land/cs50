#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int row = 0; row < height; row++)
    {
        for (int colomn = 0; colomn < width; colomn++)
        {
            int rgbtGray = round((image[row][colomn].rgbtBlue + image[row][colomn].rgbtGreen + image[row][colomn].rgbtRed) / 3.0);

            image[row][colomn].rgbtBlue = rgbtGray;
            image[row][colomn].rgbtGreen = rgbtGray;
            image[row][colomn].rgbtRed = rgbtGray;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

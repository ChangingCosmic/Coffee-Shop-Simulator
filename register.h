#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/***************************************************
* void print_item(int rows, int cols, int data[][cols]);
* asks the user what item they want to print,
* then prints the total sales of that item for each month
*
* Parameters:
*   rows: number of rows in the array
*   cols: number of columns in the array
*   data[][cols]: the array with the necessary sales data
* Returns:
*   nothing
************************************************/
void print_item(int rows, int cols, int data[][cols]);

/***************************************************
* void total_sales(int rows, int cols, int data[][cols]);
* prints to the "sales.txt" file the total sales of each item
* also prints to the console
*
* Parameters:
*   rows: number of rows in the array
*   cols: number of columns in the array
*   data[][cols]: the array with the necessary sales data
* Returns:
*   nothing
************************************************/
void total_sales(int rows, int cols, int data[][cols]);

/***************************************************
* void top_overall(int rows, int cols, int data[][cols]);
* adds up an item's sales for each month and determins the one with the most during the year
*
* Parameters:
*   rows: number of rows in the array
*   cols: number of columns in the array
*   data[][cols]: the array with the necessary sales data
* Returns:
*   nothing
************************************************/
void top_overall(int rows, int cols, int data[][cols]);
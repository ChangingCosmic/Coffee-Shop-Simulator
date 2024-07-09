#include "register.h"

void print_item(int rows, int cols, int data[][cols]){
    int itemCode = 0;                               //initializes itemCode
    printf("Which item?\n");
    scanf("%d", &itemCode);

    printf("Jan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec\n");
    for(int month = 0; month < cols; month++){     //loop through the data array
        if(cols - 1 == month){
            printf("%d\n", data[itemCode][month]); //if it's the last one, don't add a tab
        } else {
            printf("%d\t", data[itemCode][month]);
        }
    }
}

void total_sales(int rows, int cols, int data[][cols]){
    FILE *f1 = fopen("sales.txt", "w");             //opens the sales.txt file
    fprintf(f1, "Item\tSales\n");                   //prints to the file

    int total = 0;
    for(int item = 0; item < rows; item++){
        for(int month = 0; month < cols; month++){
            total += data[item][month];             //sums up the total sales per item
        }
        fprintf(f1, "%02d\t%4d\n", item, total);    //prints to the file
        total = 0;
    }
    fclose(f1);
}

void top_overall(int rows, int cols, int data[][cols]){
    //initialize variables
    int total = 0;
    int biggestSoFar = 0;
    int biggestItem = 0;

    for(int item = 0; item < rows; item++){         //loops through data array
        for(int month = 0; month < cols; month++){
            total += data[item][month];             //sums it up
        }
        if(total > biggestSoFar){                   //if this total is bigger, switch
            biggestSoFar = total;
            biggestItem = item;
        }                                           //else, keep the same
        total = 0;                                  //resets total for next iteration
    }
    printf("The most popular item is item %d.\n", biggestItem);
}
#include "register.h"
int main(){
    int numRows = 50;                             //number if items
    int numCols = 12;                             //numbe of month txt files
    int dataArr[numRows][numCols];

    char *monthArray[] = {                        //0 to 11
        "Jan_2023_data.txt", "Feb_2023_data.txt", "Mar_2023_data.txt",
        "Apr_2023_data.txt", "May_2023_data.txt", "Jun_2023_data.txt",
        "Jul_2023_data.txt", "Aug_2023_data.txt", "Sep_2023_data.txt",
        "Oct_2023_data.txt", "Nov_2023_data.txt", "Dec_2023_data.txt"
    };

    for(int month = 0; month < numCols; month++){ //loop through and populate array
        char *fileName = monthArray[month];       //open specific month file
        FILE *givenFile = fopen(fileName, "r");

        if(NULL == givenFile) {
            printf("Cannot open file... Month variable: %d", month);
            return 2;
        } else{
            for(int item = 0; 50 > item; item++){ //loops through the data in the file
                fscanf(givenFile, "%*d %*s %d", &dataArr[item][month]);
            }
        }
        fclose(givenFile);                        //close specific month file before iterating again
    }

    int userInput = 0;
    printf("Which program would you like to run?\n(1) Output the monthly sales of an item.\n(2) Calculate overall sales for all items.\n(3) Find the most popular item.\n");
    scanf("%d", &userInput);

    switch(userInput){                             //checks what the user inputted
        case 1:
            print_item(numRows, numCols, dataArr);
            break;
        case 2:
            total_sales(numRows, numCols, dataArr);
            break;
        case 3:
            top_overall(numRows, numCols, dataArr);
            break;
        default:                                   //default
            printf("Invalid input.");
            break;
    }
}
#include <stdio.h>
#define SIZE 15

//function prototypes
int binarySearch (int arr[], int a, int b, int key);
void printHeader(void);
void printRow(int arr[], int a, int mid, int b);

//recursive binary search
int binarySearch (int arr[], int a, int b, int key) {
    //get mid value of current search
    int mid = a + (b-a) / 2;
    //print current search range
    printRow(arr, a, mid, b);
    //if end value is greater than 1 (if there are enough elements)
    if(b >= a) {
        //if key is middle value, return middle value
        if(arr[mid] == key) {
            return mid;
        }
        //if key is greater than middle value, lower ceiling value and run again
        if(arr[mid] > key) {
            return binarySearch(arr, a, mid-1, key);
        }
        //if key is less than mid value, raise floor and search again
        return binarySearch(arr, mid+1, b, key);
    }
    //none of the above conditionals are met, return -1 (val not found)
    return -1;
}

//print indicies
void printHeader(void) {
    printf("\nIndicies:\n");
    //loop through array and print all indicies
    for(int i = 0; i < SIZE; i++) {
        printf("%3d ", i);
    }
    //new line
    printf("\n");
    //print --- line
    for(int i = 0; i <= SIZE*4; i++) {
        printf("-");
    }
    //new line
    printf("\n");
}

//print search row
void printRow(int arr[], int a, int mid, int b) {
    //loop through array
    for(int i = 0; i < SIZE; i++) {
        //if i is outside of range, print nothing
        if(i < a || i > b) {
            printf("%s","    ");
        }
        //if i is mid value, mark
        else if(i == mid) {
            printf("%3d*", arr[i]);
        }
        //print i if in range and not mid value
        else {
            printf("%3d ", arr[i]);
        }
    }
    printf("\n");
}


int main(void) {
    //init array and args
    int arr[SIZE];
    int key, result;
    //fill array
    for(size_t i = 0; i < SIZE; ++i) {
        arr[i] = 2 * i;
    }
    //get n number of elements in array
    int n = sizeof(arr) / sizeof(arr[0]);
    //prompt a store search key
    printf("Enter key (Between 0 and 28): ");
    scanf("%d", &key);
    //print indicies/header
    printHeader();
    //run search
    result = binarySearch(arr, 0, n-1, key);
    //print result
    if (result != -1) {
        printf("\n%d found at index: %d\n", key, result);
    } else {
        printf("%d not found in array\n", key);
    }
}
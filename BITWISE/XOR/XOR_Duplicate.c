/*
logic:
i=0 → res = 0 ^ 1 = 1

i=1 → res = 1 ^ 2 = 3

i=2 → res = 3 ^ 3 = 0

i=3 → res = 0 ^ 2 = 2

Note: Not all Duplicate it will works it has some limitations.

*/

#include<stdio.h>
#include<stdint.h>


uint8_t arr[4] = {1,2,3,2};
uint8_t res=0;
uint8_t i=0;

uint8_t arr_size=0;

int main()
{

arr_size = sizeof(arr)/ sizeof(arr[0]);
for(i=0; i<arr_size; i++)
{
    res ^= arr[i];
    
}

    printf("Repeated/Duplicate No:%d", res);
}


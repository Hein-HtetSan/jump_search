
#include "stdio.h"
#include "math.h"

int min(int first, int second)
{
   if(second > first)
   {
       return first;
   }else{
       return second;
   }
};


int Modified_Search(int arr[], int size, int target)
{
    // Formula
   int step = log(size); // changed equation
   int previous = 0;
   while (arr[min(step, size)-1] < target)
   {
       /* code */
       previous = step;
       step = step + sqrt(size);
        if(previous >= size)
        {
            return -1;
        }
   }
   for(int i=previous; i<size; i++)
   {
    if(arr[i] == target)
    {
        return i;
    }
   }
    return -1;
};


int main()
{
    int n;
    int memory[] = {5,4,3,2,1,45,66, 14,76, 55};
    int size = sizeof(memory)/sizeof(memory[0]);
    int toFind = 0;
    printf("Find Number : ");
    scanf("%d", &n);
    // jump search
    int indexNumber = Modified_Search(memory, size, n);
    if(indexNumber < 0){
        printf("Not Found");
    }else{
        printf("We found %d at index : %d", n,indexNumber);
    }

    return 0;
}

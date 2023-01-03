
#include "stdio.h"
#include "math.h"

int step=3;
int nextStep = 3;
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
   int previous = 0;
   while (arr[min(step, size)-1] < target)
   {
       /* code */
       previous = step;
       previous += nextStep;
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
    int memory[] = {5,4,3,2,1,45,66, 14,76};
    int size = sizeof(memory)/sizeof(memory[0]);
    int toFind = 0;
    int n = 14;
    // jump search
    int indexNumber = Modified_Search(memory, size, n);
    printf("We found %d at index : %d", n,indexNumber);

    return 0;
}

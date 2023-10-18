#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 3, 3, 1, 2, 5, 5, 5, 7, 6, 5};

    for (int i = 0; i < 15; i++)
    {
        int count = 1; 
        for (int k = i + 1; k < 15; k++)
        {
            if (arr[i] == arr[k])
            {
                count++;
                
                arr[k]=-1;
            }
        }

        if (count > 1 && arr[i] !=-1)  // Print only if there are duplicates
        {
            printf("%d - %d\n", arr[i], count);
        }
    }
    return 0;
}

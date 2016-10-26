// Algo_learning--sorting--insertion_sorting
// Programmed by Sn0wrain    2015-6-14
// Upadte1:Use the malloc to create a dynamic array to generate the array of any numbers

#include <stdio.h>
#include <malloc.h>
int main()
{
    int i,key,m,size;
    // Dynamic arrays should firstly be defined
    int *a;

    // Then assign [malloc(n1 * sizeof(int) = calloc(n1, sizeof(int)))]
    printf("How many numbers you wanna sort: ");    
    scanf("%d",&size);
    a=(int*)malloc(size * sizeof(int));             
    printf("Input the array you wanna sort:\n");    
    
    //Input the array
    for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
    printf("The array you input is:");
    for(i=0;i<size;i++)
        {
            printf(" %d",a[i]);    
        }
    printf("\n");
    for(i=1;i<size;i++)
        {
            key=a[i];
            for(m=i-1;m>-1;m--)
            {
                if(key<a[m])
                {
                    //Swap the key
                    a[m+1]=a[m];        
                    a[m]=key;        

                }
            }
            
        }
    printf("\nThe array after sorted is :");
    for(i=0;i<size;i++)
        {
            printf(" %d",a[i]);
        }
    printf("\n");
    free(a);    
    return 0;
}

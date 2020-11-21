#include <stdio.h>
int main()
{
    int array[10]={10,20,50,30,56,70,59,37,92,100};
    bubleSort(array,10);

    return 0;
}
void bubleSort(int array[],int size){
    int altered =1;
    while (altered)
    {
        altered=0;
        for (int i = 0; i < size; i++)
        {
            if (array[i]>array[i+1])
            {
                altered=1;
                int temp = array[i];
                printf("\ntemp\t %d",temp);
                printf("\narray[i]\t %d",array[i]);
                printf("\narray[i+1]\t %d",array[i+1]);
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
    }

    printf("\n+--------------------+");
   for (int i = 0; i < size; i++)
   {
       printf("\n| %d----->\t%d\t|",i,array[i]);
   }
    printf("\n+--------------------+");
   
    
}
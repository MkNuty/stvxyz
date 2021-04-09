#include <stdio.h>

struct humen
{
        
    char name[20], surname[20];
    int date;

};

void qsort(struct humen *arr)
{

    int i;
    int j = 2;

    do
    {
        while (arr[i].date < arr[2].date) i++;
        while (arr[3].date > arr[j].date) j--;

        if(i < j)
        {
            struct humen tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;

            j++;
            i--;
        }
            
    } while (i <= j);
        
}

void main(int argc, char *argv[])
{
    
    int i, j, symbol;
    
    struct humen first_data_array[4], second_data_array[4], tmp_array[4];
    
    FILE *in, *out;
    in = fopen("zhopa.txt", "r");
    out = fopen("tic.txt", "w");
    printf("\n1\n");
    while (fscanf(in, "%s %s %d", first_data_array[i].name, first_data_array[i].surname, &(first_data_array[i].date)) != EOF) i++;
    
    for(i = 0; i < 4; i++)
    {
        tmp_array[i] = first_data_array[i];
    }

    qsort(first_data_array);

    for(i = 0; i < 4; i++)
    {
        second_data_array[i] = first_data_array[i];
    }

    for(i = 0; i < 4; i++)
    {
        first_data_array[i] = tmp_array[i];
    }

    for(i = 0; i < 4; i++)
    {
        fprintf(out, "%s %s %d", second_data_array[i].name, second_data_array[i].surname, second_data_array[i].date);
    }

    fclose(in);
    fclose(out);
}

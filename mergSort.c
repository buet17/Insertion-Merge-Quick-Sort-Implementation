#include<stdlib.h>
#include<stdio.h>

void mergeSort(int arr[], int l, int r);
void merge(int arr[], int l, int m, int r);
void printArray(int A[], int size);
int asc_order();
int dsc_order();
int rand_order();

void menu();

int main()
{
        printf("\n ======Merge Sort Menu====== \n\n");
        printf("1. 101-200 in already Ascending Order.\n");
        printf("2. 200-101 in already Descending Order.\n");
        printf("3. 101-200 in the following Random Order.\n");
        printf("5. Exit the Program.\n");
        printf("\n Enter the Choice (1/2/3/5):");

        menu();
        return 0;
}

void menu()
{
    int operation=0;

      scanf("%c",&operation);

      switch(operation)
        {
          case '1':
            {
                asc_order();

                printf("\n ======Merge Sort Menu====== \n\n");
                printf("1. 101-200 in already Ascending Order.\n");
                printf("2. 200-101 in already Descending Order.\n");
                printf("3. 101-200 in the following rRandom Order.\n");
                printf("5. Exit the Program.\n");
                printf("\n Enter the Choice (1/2/3/5):");

                menu();
                break;
            }
        case '2':
            {
                dsc_order();

                printf("\n ======Merge Sort Menu====== \n\n");
                printf("1. 101-200 in already Ascending Order.\n");
                printf("2. 200-101 in already Descending Order.\n");
                printf("3. 101-200 in the following rRandom Order.\n");
                printf("5. Exit the Program.\n");
                printf("\n Enter the Choice (1/2/3/5):");

                menu();
                break;
            }
        case '3':
            {
                rand_order();

                printf("\n ======Merge Sort Menu====== \n\n");
                printf("1. 101-200 in already Ascending Order.\n");
                printf("2. 200-101 in already Descending Order.\n");
                printf("3. 101-200 in the following rRandom Order.\n");
                printf("5. Exit the Program.\n");
                printf("\n Enter the Choice (1/2/3/5):");

                menu();
                break;
            }
        case '5':
            {
                printf ("\n\t Terminating... \n");
                exit(0);
            }

        default:
            {
                //printf ("\n\t Press the correct key \n");
                menu();

            }
        }

}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int no_swap=0,comp=0;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
        no_swap++;
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
        no_swap++;

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2)
    {
        comp++;

        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
            comp++;
        }
        else
        {
            arr[k] = R[j];
            j++;
            comp++;
        }
        k++;
        no_swap++;
    }

    /* Copy the remaining elements of L[], if there are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
        no_swap++;
    }

    /* Copy the remaining elements of R[], if there re any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
        no_swap++;
    }
        printf("\nNo of swaps = %d",no_swap);
        printf("\nNo of comparisions  = %d",comp);
}

/* l is for left index and r is right index of the sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    int no_swap=0, comp=0;
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);

    }

}

void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
}


 int asc_order()
 {
    int i, j, n, temp;

    int arr[]={101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200};


    int arr_size = sizeof(arr)/sizeof(arr[0]);


    printf("Given array is: \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);


    printf("\nSorted array is: \n");
    printArray(arr, arr_size);

    return 0;

 }
int dsc_order()
 {
    int i, j, n, temp;

    int arr[]={200,199,198,197,196,195,194,193,192,191,190,189,188,187,186,185,184,183,182,181,180,179,178,177,176,175,174,173,172,171,170,169,168,167,166,165,164,163,162,161,160,159,158,157,156,155,154,153,152,151,150,149,148,147,146,145,144,143,142,141,140,139,138,137,136,135,134,133,132,131,130,129,128,127,126,125,124,123,122,121,120,119,118,117,116,115,114,113,112,111,110,109,108,107,106,105,104,103,102,101};

    int arr_size = sizeof(arr)/sizeof(arr[0]);


    printf("Given array is: \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);


    printf("\nSorted array is: \n");
    printArray(arr, arr_size);

    return 0;

 }

 int rand_order()
 {

      int arr[]={
                    195,134,144,141,145,197,177,101,196,146,175,173,154,171,111,136,115,162,165,192,
                    131,142,120,185,102,181,107,198,106,176,121,178,119,128,193,127,123,143,155,186,
                    191,122,132,158,129,183,163,180,103,188,150,151,172,118,174,170,104,130,116,117,
                    112,139,194,147,153,164,169,199,148,138,200,190,126,152,161,179,149,137,133,110,
                    159,113,140,160,105,184,182,135,114,125,168,189,124,108,187,166,156,109,167,157
                 };

    int arr_size = sizeof(arr)/sizeof(arr[0]);


    printf("Given array is: \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);


    printf("\nSorted array is: \n");
    printArray(arr, arr_size);

    return 0;

 }

#include<stdio.h>

void swap(int* a, int* b);
int partition (int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
void printArray(int arr[], int size);
int asc_order();
int dsc_order();
int rand_order();
void menu();

int main()
{
      printf("\n ======Quick Sort Menu====== \n\n");
      printf("1. 101-200 in already Ascending Order.\n");
      printf("2. 200-101 in already Descending Order.\n");
      printf("3. 101-200 in the following Random Order.\n");
      printf("5. Exit the Program. \n");

      printf("\n Enter the Choice (1/2/3/5):");
        menu();

        //getchar();
        return 0;


}
void menu()
{
    int operation=0;

    top:


      scanf("%c",&operation);

      switch(operation)
        {
          case '1':
            {
                asc_order();

                  printf("\n ======Quick Sort Menu====== \n\n");
                  printf("1. 101-200 in already Ascending Order.\n");
                  printf("2. 200-101 in already Descending Order.\n");
                  printf("3. 101-200 in the following Random Order.\n");
                  printf("5. Exit the Program. \n");
                  printf("\n Enter the Choice (1/2/3/5):");

                break;
            }
        case '2':
            {
                dsc_order();

                  printf("\n ======Quick Sort Menu====== \n\n");
                  printf("1. 101-200 in already Ascending Order.\n");
                  printf("2. 200-101 in already Descending Order.\n");
                  printf("3. 101-200 in the following Random Order.\n");
                  printf("5. Exit the Program. \n");
                  printf("\n Enter the Choice (1/2/3/5):");

                break;
            }
        case '3':
            {
                rand_order();
                  printf("\n ======Quick Sort Menu====== \n\n");
                  printf("1. 101-200 in already Ascending Order.\n");
                  printf("2. 200-101 in already Descending Order.\n");
                  printf("3. 101-200 in the following Random Order.\n");
                  printf("5. Exit the Program. \n");
                  printf("\n Enter the Choice (1/2/3/5):");

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
                break;

            }
        }
    goto top;
}

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    int no_swap=0, comp=0;

    for (int j = low; j <= high- 1; j++)
    {
        comp++;

        if (arr[j] <= pivot)
        {
            comp++;

            i++;
            swap(&arr[i], &arr[j]);
        }
        no_swap++;
    }
    swap(&arr[i + 1], &arr[high]);

        printf("\nNo of swaps = %d",no_swap);
        printf("\nNo of comparisions  = %d",comp);

    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        int pi = partition(arr, low, high);


        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
}

int asc_order()
 {

    int arr[]={200,199,198,197,196,195,194,193,192,191,190,189,188,187,186,185,184,183,182,181,180,179,178,177,176,175,174,173,172,171,170,169,168,167,166,165,164,163,162,161,160,159,158,157,156,155,154,153,152,151,150,149,148,147,146,145,144,143,142,141,140,139,138,137,136,135,134,133,132,131,130,129,128,127,126,125,124,123,122,121,120,119,118,117,116,115,114,113,112,111,110,109,108,107,106,105,104,103,102,101};


    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, n-1);
    printf("\nSorted array is: \n");
    printArray(arr, n);

    return 0;

 }

int dsc_order()
 {

   int arr[]={200,199,198,197,196,195,194,193,192,191,190,189,188,187,186,185,184,183,182,181,180,179,178,177,176,175,174,173,172,171,170,169,168,167,166,165,164,163,162,161,160,159,158,157,156,155,154,153,152,151,150,149,148,147,146,145,144,143,142,141,140,139,138,137,136,135,134,133,132,131,130,129,128,127,126,125,124,123,122,121,120,119,118,117,116,115,114,113,112,111,110,109,108,107,106,105,104,103,102,101};


    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, n-1);
    printf("\nSorted array is: \n");
    printArray(arr, n);

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

    //int arr_size = sizeof(arr)/sizeof(arr[0]);

    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, n-1);
    printf("\nSorted array is: \n");
    printArray(arr, n);

    return 0;

 }


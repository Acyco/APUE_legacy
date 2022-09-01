#include <stdio.h>
#include <stdlib.h>


// 求fibonacci数列的前十项，并在数组中逆序存放
static void fibonacci(void)
{
    int i, j, tmp;
    int fib[10] = {1,1};
    for(i = 2; i < sizeof(fib)/sizeof(fib[0]); i++)
	fib[i] = fib[i-1] + fib[i-2];
    for(i = 0; i < sizeof(fib)/sizeof(fib[0]); i++)
	printf("%d ", fib[i]);
    printf("\n");

    i = 0;
    j = sizeof(fib)/sizeof(fib[9]) - 1;

    while(i < j)
    {
	tmp = fib[i];
	fib[i] = fib[j];
	fib[j] = tmp;

	i++;
	j--;
    }

    for(i = 0; i < sizeof(fib)/sizeof(fib[0]); i++)
	printf("%d ", fib[i]);
    printf("\n");

    return ;
}



// 冒泡排序

#define N 	10
static void sort1()
{
    int i, j, tmp;
    int arr[N] = {12,8,45,30,99,67,3,7,68,11};

    for(i = 0; i < N; i++)
	printf("%d ", arr[i]);
    printf("\n");


    for(i = 0; i < N-1; i++)
    {
	for(j = 0; j < N-1 -i; j++)
	{
	    if(arr[j] > arr[j + 1])
	    {
		tmp = arr[j];
		arr[j] = arr[j+1];
		arr[j+1] = tmp;
	    }

	}
    }

    for(i = 0; i < N; i++)
	printf("%d ", arr[i]);
    printf("\n");


}


// 选择法排序

static void sort2(void)
{
    int i,j,k,tmp;
    int arr[N]  = {23,45,90,76,13,55,76,45,3,8};

    for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
        printf("%d ", arr[i]);
    printf("\n");

    for(i = 0; i < N - 1; i++)
    {
        k = i;
        for (int j = i+1; j < N; j++ ) {
            if(arr[j] < arr[k])
            {
                k = j;
            }
            if( i != k ){
                tmp = arr[i];
                arr[i]= arr[k];
                arr[k] = tmp;
            }
        }
    }


    for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
        printf("%d ", arr[i]);
    printf("\n");
}

 // 进制转换

static void base_convert(void)
{

    int num, base, i = 0;
    int n[128];

    printf("Please enter the converted num: ");
    scanf("%d", &num);
    printf("Please enter the base:");
    scanf("%d", &base);

    do {
        n[i] = num % base;
        num = num / base;
        i++;
    } while (num != 0);

    for (i --; i >= 0; i--) {
        if(n[i] >= 11)
            printf("%c", n[i] - 10 + 'A');
        else
            printf("%d", n[i]);
    }
    printf("\n");

}


int main()
{
   // fibonacci();
  //  sort1();
  //  sort2();
  base_convert();
}

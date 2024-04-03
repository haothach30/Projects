#include <stdio.h>
#include <math.h>
#define MAX_SIZE 100 // suc chua toi da
 
void NhapMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
 
void XuatMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
 

   // Kiem tra so ngto

bool IsPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
 

    // Ðem so luong so ngto

int PrimeCount(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (IsPrime(a[i]))
        {
            count++;
        }
    }
    return count;
}
 

   // Liet ke cac so ngto
 
void PrintPrime(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (IsPrime(a[i]))
        
            printf("%d ", a[i]);
        
    }
}
 
int main()
{
    int arr[MAX_SIZE];
    int n;
    do
    {
        scanf("%d", &n);
    } while (n <= 0 || n > MAX_SIZE);
 
    NhapMang(arr, n);
 
    XuatMang(arr, n);
    printf("\n");
 
    int primeCount = PrimeCount(arr, n);
    printf("%d ", primeCount);
     printf("\n");
    if(primeCount > 0){

        PrintPrime(arr, n);
    }
}

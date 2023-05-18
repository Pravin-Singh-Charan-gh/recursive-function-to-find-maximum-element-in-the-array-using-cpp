#include <iostream>
using namespace std;
int
maxi (int *arr, int n)
{
  if (n == 0)
    return arr[0];
  int maxii = maxi (arr, n - 1);
  return (arr[n - 1] > maxii ? arr[n - 1] : maxii);
}

int
main ()
{
  int n;
  cout << "Enter array size : ";
  cin >> n;

  int *arr = new int[n];

  cout << "Enter " << n << " elements of array : ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];
    cout <<"maximum element : "<< maxi (arr, n);
}

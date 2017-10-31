#include<iostream>
using namespace std;
void quickSort(int arr[], int s, int d) {
      int i = s, j = d;
      int tmp;
      int pivot = arr[(s + d) / 2];

      /* partition */
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };

      /* recursion */
      if (s < j)
            quickSort(arr, s, j);
      if (i < d)
            quickSort(arr, i, d);
}
int main(){
    int a[100],i,n;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    quickSort(a,1,n);
    for(i=1;i<=n;i++)
        cout<<a[i];



}

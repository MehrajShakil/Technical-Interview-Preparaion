/// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i = 1 ; i<n ; ++i ) {
        bool swaped = false;
        for(int j = 1 ; j<=n-i ; ++j ) {
            if(arr[j]>arr[j+1]) {
                swaped = true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(!swaped) break;
    }
}

int main() {
   int n;
   cin >> n;
   int arr[n+1];
   for ( int i = 1 ; i<=n ; ++i ) cin >> arr[i];

   bubbleSort(arr,n);

   for(int i = 1 ; i<=n ; ++i ) cout << arr[i] << " ";

}

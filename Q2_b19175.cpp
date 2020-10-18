#include <iostream>
//b19175 Group4 
//Question 2
using namespace std;
void SortBalls(int arr[],int n){
    for(int i=1;i<=n-1;i++){
        //pairwise swapping in the unsorted of the array
        for (int j=0;j<=(n-i-1);j++){
            if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
        }
    }
}


int main()
{
    //taking input
    freopen("coding-question-b.txt","r",stdin);
    int n;
    cin>>n;
    //number of items in array
    int arr[10000];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    //calling sort function to sort
    SortBalls(arr,n+1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


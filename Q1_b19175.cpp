#include <iostream>
#include <bits/stdc++.h>
//Question 1
//b19175
using namespace std;
struct movie
{
    int start, finish;
};

bool activityCompare(movie m1, movie m2)
{   //for sorting on basis of finish time
    return (m1.finish < m2.finish);
}

// Returns count of the maximum set of activities that can
void MaxMovie(movie arr[], int n)
{
    // Sort movies according to finish time
    sort(arr, arr+n, activityCompare);
    int c=1;
    cout << "Following intervals are selected ";

    // The first movie always gets selected
    int i = 0;
    cout << "(" << arr[i].start << ", " << arr[i].finish << ") ";
    // for rest of intervals
    for (int j = 1; j < n; j++)
    {
      //if starting time of next movie is greater than finish time of present movie
      if (arr[j].start >= arr[i].finish)
      {
          cout << "(" << arr[j].start << ", "<< arr[j].finish << ") ";
          i = j;
          c++;
      }
    }
    cout<<""<<endl;
    cout<<"number of movies can be watched "<<c<<endl;
}

// input and function call

int main()
{
    int k=6;
    freopen("coding-question-a.txt","r",stdin);
    for(int i = 0; i < k; i++){
        int m;
        cin>>m;
        //number of items in array
        movie InputArr[m];
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x;
            cin>>y;
            InputArr[i]={x,y};
        }
        int n = sizeof(InputArr)/sizeof(InputArr[0]);
        MaxMovie(InputArr, n);

    }
}


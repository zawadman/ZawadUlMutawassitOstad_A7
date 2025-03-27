#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

// int binarySearch (int& x, vector <int>& arr)
// {
//     int low =0;
//     int high = arr.size()-1;
//     while(low <= high)
//     {
//         int mid = low + (high - low )/2;
//         if (arr[mid] == x) {return mid;}
//         else if (arr[mid] < x){low = mid+1;}
//         else {high = mid-1;}
//     }
//     return -1;
// }
int countNumbers(pair<int,int>& r, vector <int>& arr)
{
    //auto a = arr;
    int left = r.first;
    int right = r.second;

    int finalIdx = 0;

    for (size_t i = 0 ; i < arr.size(); i++)
    {
        if (arr[i] >= left && arr[i] <= right) 
        {
            finalIdx++;
        }
    }


    
    return finalIdx;
}


int main()
{
    int n, m;
    cin >> n ;
    vector <int> arr(n);
    for (size_t i = 0; i < n ; i++)
    {
        
        cin >> arr[i];

    }

    //sort(arr.begin(),arr.end());

    cin >> m ; // no of querries

    vector <int> querryCount(m);
    vector <pair<int,int>> range ;
    int l,r;
    for (size_t i = 0; i < m ; i++)
    {
        
        cin >> l >> r ;
        range.push_back({l,r});

        querryCount[i] = countNumbers(range[i], arr );



        //cout << "the array" << arr[i] << "," ;
        //int rr ;
        //cout << "left" << range[i].first << "right" << range[i].second;
        
    }

    for (size_t i = 0 ; i<m ; i++)
    {
        cout << querryCount[i] << "\n";
    }

    //cout << "\n" << n << "n" ;

    return 0;
}
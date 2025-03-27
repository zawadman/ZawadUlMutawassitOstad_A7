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
int countNumbers(pair<long long,long long>& r, vector <long long>& arr)
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
    long long n, m;
    cin >> n ;
    vector <long long> arr(n);
    for (size_t i = 0; i < n ; i++)
    {
        
        cin >> arr[i];

    }

    //sort(arr.begin(),arr.end());

    cin >> m ; // no of querries

    vector <long long> querryCount(m);
    vector <pair<long long,long long>> range ;
    long long l,r;
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
// Consider an n-columnItemment array a, where each index i in the array contains a reference to an array of 
// ki integers (where the value of ki varies from array to array). 

// Given a, you must answer q queries. Each query is in the format i j, where i denotes an index 
// in array a and j denotes an index in the array located at a[i] For each query, 
// find and print the value of columnItemment j in the array at location a[i] on a new line.

// Input Format:-

// The first line contains two space-separated integers denoting the respective values of 
// n (the number of variable-length arrays) and q (the number of queries).

// Each line i of the n subsequent lines contains a space-separated sequence in the format k 
// a[i]0 a[i]1 … a[i]k-1 describing the k-columnItemment array located at a[i].

// Each of the q subsequent lines contains two space-separated integers describing the 
// respective values of i (an index in array a) and j (an index in the array 
// referenced by a[i] for a query.

// Output Format:-

// For each pair of i and j values (i.e., for each query), print a single integer denoting the 
// columnItemment located at index j of the array referenced by a[i]. There should be a total of q lines of 
// output.

#include<iostream>  
#include<vector>  
using namespace std;  
int main() {
    int n;
    int q;
    cin >> n >> q;
    vector<int> a[n];
    for(int i = 0; i < n; i++){
        int columnSize;
        cin >> columnSize;
        int columnItem;
        for(int j = 0; j < columnSize; j++){
            cin >> columnItem;
            a[i].push_back(columnItem);
        }
    }
    
    int r, s;
    for(int k = 1; k <= q; k++){
        cin >> r >> s;
        cout << a[r][s] << endl;
    }
    return 0;
}


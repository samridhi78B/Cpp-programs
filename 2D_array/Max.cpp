#include <iostream>
#include <climits>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0; i<r;i++){
        for(int j=0; j<c;j++){
        cin>>arr[i][j];
    }
    }
    int max = INT_MIN;
     for(int i=0; i<r;i++){
        for(int j=0; j<c;j++){
        if(arr[i][j] > max){
            max = arr[i][j];
        }
    }
    }
    cout<<max;
}

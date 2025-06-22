

#include<iostream>

using namespace std;

int main(){

    // first make and answer arrya

    int arr[10][10];

    int min_row = 0;

    int max_row = 9;

    int min_col = 0;

    int max_col = 9;

    int ans = 1;

    while(min_row <= max_row && min_col <= max_col){
        for(int i = min_col; i <= max_col; i++){
            arr[min_row][i] = ans;
        }
        min_row++;

        for(int i = min_row; i <= max_row; i++){
            arr[i][max_col] = ans;
        }
        max_col--;
        for(int i = max_col; i >= min_col; i--){
            arr[max_row][i] = ans;
        }
        max_row--;

        for(int i = max_row; i >= min_row; i--){
            arr[i][min_col] = ans;
        }
        min_col++;

        ans++;
    }

  int t;
  cin>>t;

 

  while(t--){
     char nums[10][10];

  int sum = 0;
  
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin>>nums[i][j];

            if(nums[i][j] == 'X') sum += arr[i][j];
        }
    }

    cout<<sum<<endl;
  }
}
#include<iostream>
#include<vector>
using namespace std;
int findTheSumOfRightDiagonal(vector<vector<int> > a){
    int i = a[0].size()-1,j=0;
    int requiredSum = 0;
    while(i>=0 && j<a[0].size()){
        requiredSum += a[j][i];
        i--;
        j++;
    }

    return requiredSum;
}
int main(){
    int n,m;
    cout<<"Enter the number of rows and columns you want for the first matrix:";
    cin>>n>>m;
    vector<vector<int> > v(n);
    cout<<"Enter the elements in the vector:";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int k;
            cin>>k;
            v[i].push_back(k);
        }
    }
    cout<<"The matrix is:\n";
    for(int k=0;k<n;k++){
        for(int l=0;l<m;l++){
            cout<<v[k][l]<<" ";
        }
        cout<<"\n";
    }
    int requiredSum = findTheSumOfRightDiagonal(v);
    cout<<"The sum of the right diagonal elements is:"<<requiredSum;
    return 0;
}
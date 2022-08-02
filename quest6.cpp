#include<iostream>
#include<vector>
using namespace std;
int findTheSumOfCols(vector<vector<int> > a){
    int sumOfCols = 0;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[0].size();j++){
            sumOfCols += a[j][i];
        }
    }
    return sumOfCols;
}
int findTheSumOfRows(vector<vector<int> > a){
    int sumOfRows = 0;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[0].size();j++){
            sumOfRows += a[i][j];
        }
    }
    return sumOfRows;
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
    int sumOfRows = findTheSumOfRows(v);
    int sumOfCols = findTheSumOfCols(v);
    cout<<"The sum of rows is:"<<sumOfRows<<"\n";
    cout<<"The sum of rows is:"<<sumOfCols;
    return 0;
}
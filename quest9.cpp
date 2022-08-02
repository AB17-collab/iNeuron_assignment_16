#include<iostream>
#include<vector>
using namespace std;
bool checkIfTheMatrixIsSparse(vector<vector<int> > a){
    bool checker = false;
    int countZero = 0;
    int countNonZero = 0;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[0].size();j++){
            if(a[i][j]==0)
                countZero++;
            else
                countNonZero++;
        }
    }
    if(countNonZero>countZero)
        return false;
    else
        return true;
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
    cout<<"\n";
    bool isSparse = checkIfTheMatrixIsSparse(v);
    if(isSparse)
        cout<<"Yes,it's a sparse matrix";
    else
        cout<<"No, it's not a sparse matrix";
    return 0;
}
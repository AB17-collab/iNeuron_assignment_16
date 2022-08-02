#include<iostream>
#include<vector>
using namespace std;
void printTheLowerTriangularMatrix(vector<vector<int> > a){
    cout<<"Printing the lower triangular elements:\n";
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[0].size();j++){
            if(j<=i){
                cout<<a[i][j]<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<"\n";
    }
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
    printTheLowerTriangularMatrix(v);
    return 0;
}
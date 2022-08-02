#include<iostream>
#include<vector>
using namespace std;
void printTheTransposeOfTheMatrix(vector<vector<int> > v1){
    vector<vector<int> > transpose(v1[0].size());
    for(int i=0;i<v1[0].size();i++){
        for(int j=0;j<v1.size();j++){
            transpose[i].push_back(v1[j][i]);
        }
    }
    cout<<"The transpose of the matrix is:\n";
    for(int i=0;i<transpose.size();i++){
        for(int j=0;j<transpose[0].size();j++){
            cout<<transpose[i][j]<<" ";
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
    cout<<"The original matrix is:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j];
        }
        cout<<"\n";
    }
    cout<<"\n";
    printTheTransposeOfTheMatrix(v);
    return 0;
}
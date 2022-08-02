#include<iostream>
#include<vector>
using namespace std;
int checkTheRowWithMaxOnes(vector<vector<int> > a){
    vector<int> rows(a.size());
    for(int i=0; i<a.size(); i++){
        int count = 0;
        for(int j=0;j<a[0].size();j++){
            if(a[i][j]==1)
                count++;
        }
        rows[i] = count;
    }
    int maxiMum = rows[0];
    int toBeReturned = 0;
    for(int j=1;j<rows.size();j++){
        if(rows[j]>maxiMum){
            toBeReturned = j;
            maxiMum = rows[j];
        }
    }
    return toBeReturned;
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
    int rowWithMaxOnes = checkTheRowWithMaxOnes(v);
    cout<<"The row with max ones is:"<<rowWithMaxOnes;
    return 0;
}
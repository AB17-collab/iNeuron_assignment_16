#include<iostream>
#include<vector>
using namespace std;
void addTheTwoMatrices(vector<vector<int> > a,vector<vector<int> >b){
    if(a.size() != b.size() || a[0].size() != b[0].size()){
        cout<<"The matrices can't be added!";
        exit(0);
    }
    vector<vector<int> > v3(a.size());
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[0].size();j++){
            v3[i].push_back(a[i][j] + b[i][j]);
        }
    }
    cout<<"The resultant vector is:\n";
    for(int i=0;i<v3.size();i++){
        for(int j=0;j<v3[0].size();j++){
            cout<<v3[i][j]<<" ";
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
    cout<<"The first matrix is:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    int a,b;
    cout<<"Enter the number of rows and columns you want for the second matrix:";
    cin>>a>>b;
    vector<vector<int> > v2(a);
    cout<<"Enter the elements in the vector:";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            int l;
            cin>>l;
            v2[i].push_back(l);
        }
    }
    cout<<"The second matrix is:\n";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<v2[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    addTheTwoMatrices(v,v2);
    return 0;
}
//divide a given array into two sub array with max difference
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"\nEnter elements(saperated with spaces): ";
    vector <int> v(n);
    for(int i{0};i<n;++i){
        cin>>v[i];
    }
    //WRITE CODE BELOW FROM HERE.
    //sample vector: {1,6,-3,6,-4,18}
    int max_diff{0},ans=INT_MIN,sum{0},presum{0};
    for(int i{0};i<v.size();++i){
        sum+=v[i];
    }
    for(int i{0};i<v.size()-1;++i){
        max_diff=0;
        presum+=v[i];
        max_diff=presum-(sum-presum);
        if(max_diff<0)
        max_diff*=(-1);
        ans=max(ans,max_diff);
    }
    cout<<"Max difference is: "<<ans;
    //WRITE YOUR CODE ABOVE FROM HERE.
    return 0;
}

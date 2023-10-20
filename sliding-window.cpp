#include <iostream>
#include <vector>
using namespace std;

int main()           //sliding window
{
    int arr[]={1,2,3,4,5,6};
    int sum=0;
    vector <int> num;
    for(int i=0;i<6-2;i++){
        if(i==0){
           sum=arr[i]+arr[i+1]+arr[i+2];
           num.push_back(sum);
        }else{
            sum-=arr[i-1];
            sum+=arr[i+2];
            num.push_back(sum);
        }
    }
    for(int i=0;i<num.size();i++){
        cout<<num[i]<<",";
    }
    return 0;
}

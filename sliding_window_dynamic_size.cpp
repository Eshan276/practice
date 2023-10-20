#include <iostream>
#include <vector>
using namespace std;

int main()           //sliding window with dynamic size
{
    int arr[]={1,2,3,4,5,6};
    int sum=0,lim=7,flag=0,min=7,cur=0,start=0;             //min ta hoche  size +1
    vector <int> num;  
    for(int i=0;i<6;i++){
        if(flag==0){
        if(sum<lim){
            sum+=arr[i];
            cur++;
        }else{
            if(min>cur){
                min=cur;
            }
            flag=1;
        }
        }else{
            for(int j=start;j<i;j++){
                if(sum>lim){
                   sum-=arr[j];
                   cur--;
                }else if(sum==lim){
                   if(min>cur){
                        min=cur;
                    } 
                    start=j;
                    flag=0;
                }else{
                    start=j;
                    flag=0;
                }
            }
        }
    }
    /*for(int i=0;i<num.size();i++){
        cout<<num[i]<<",";
    }*/
    cout<<min;
    return 0;
}

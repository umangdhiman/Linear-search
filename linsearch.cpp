#include<iostream>
using namespace std;
class linearsearch{
    int arr[100],n,i,k,x;
public:
    void get(){     //function definition to get data
        cout<<"Enter how many nos?"<<endl;
        cin>>n;
        k=0;
        cout<<"Enter nos"<<endl;
        for(i=0;i<n;i++)    //loop to get array of numbers
            cin>>arr[i];
        cout<<"Enter no. to be searched"<<endl;     //which no. to be searched?
        cin>>x;
    }
    void search(){
        for(i=0;i<n;i++){   //for loop from 0 to array size-1
            if(arr[i]==x){  //compare the nos
                cout<<"Item found at "<<i+1<<"th position"<<endl;
                k=1;
                break;   //to exit the loop
            }
        }
        if(k==0)
        cout<<"Item not found"<<endl;
    }
};
int main(){
    linearsearch ls;
    ls.get();   //get function called
    ls.search();     //search function called
    return 0;
}


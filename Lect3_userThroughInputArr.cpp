   #include<iostream>
using namespace std;
int main()
{
     int i,size;                        //declare variable
    cout<<"Please enter array size";      //taking size through user
    cin>>size;
    int arr[size];
    for( i=0;i<size;i++)                   ////taking input through user
    {
        cin>>arr[i];
    }
    cout<<"Display value of array";
    for(int j=0;j<size;j++)
    {
        cout<<arr[j]<<endl;
    }
   return 0;
}
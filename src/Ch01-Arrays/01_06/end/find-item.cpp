#include <iostream>
#include <string>
using namespace std;

template <typename T>
int findItem(const T arr[], size_t size, T target)
{
    // TODO: implement
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
     int numbers[] {4, 7, 12, 3, 9, 17, 29};
    
    size_t size = sizeof(numbers) / sizeof(numbers[0]);
     int target;
     cin>>target;
     int index=findItem(numbers,size,target);
     if(index==-1)
     {
        cout<<"target not found in the array"<<endl;
     }
     else{
        cout<<"target found at index "<<index<<endl;
     }
    return 0;
}

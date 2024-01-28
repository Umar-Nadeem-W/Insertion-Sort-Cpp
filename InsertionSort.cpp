
#include <iostream>

using namespace std;


int* insertion_sort(int* arr, int size)
    {   
        int key;
        int i;
        
        for(int j = 1; j< size; j++)
        {
         key = arr[j];
         i = j - 1;
         while(i >= 0 && arr[i] < key)
         {
             arr[i+1]= arr[i];
             i--;
         }
         arr[i + 1] = key;
        }
        return arr;
        
    }
    
    
int main()
{
  
    int myarr[10] = {5,2,6,7,3,12,94,20,14,67};
    
    int s1 = sizeof(myarr);
    int s2 = sizeof(myarr[0]);
    int asize = s1/s2;
    
    cout <<"Initial array is: ";
    for (int i = 0; i < asize; i++)
    {
        cout<<myarr[i]<<" ";
    }
    cout<<endl;
    int* sortedarr = insertion_sort(myarr, asize);
    
    cout<< "Sorted Array is: ";
    for (int i = 0; i < asize; i++)
    {
        cout<<myarr[i]<<" ";
    }
    
 return 0;
}

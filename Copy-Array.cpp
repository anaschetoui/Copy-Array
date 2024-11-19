#include <iostream>
using namespace std;

int RandomNumbers(int from,int to)
{
    return rand()%(to-from+1)+from;
}

void FillArrays(int arr[100],int &arrLength)
{
    cout<<"Enter How many Element: ";
    cin>>arrLength;

    for(int i=0; i<arrLength; i++)
    {

        arr[i]=RandomNumbers(1,100);

    }

}

void  CopyArray(int arr [100],int arr2[100],int arrLength,int &arrLength2)
{

 for (int i=0;i<arrLength;i++) 
 {
  arr2[i]=arr[i];
 }

arrLength2=arrLength;

}

void PrintArray(int arr[100],int arrLength)
{
    for(int i=0; i<arrLength; i++)
    {
        cout<<arr[i]<<" ";
    }

}

int main ()
{

    int arr[100],arr2[100];
    int arrLength,arrLength2;

    FillArrays(arr,arrLength);

    cout<<"Array Elements : \n";
    PrintArray(arr,arrLength);
CopyArray(arr,arr2,arrLength,arrLength2);
    cout<<"\n Copy of Array Elements: \n";
   PrintArray(arr2,arrLength2);

    return 0;

}


    
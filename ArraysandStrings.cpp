#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int fixedArray[4] = { 1,2,3,4 };
    vector<int> dynamicArray;
    //populate dynamic array
    dynamicArray.push_back(1);
    dynamicArray.push_back(2);
    dynamicArray.push_back(3);
    dynamicArray.push_back(4);

    int indextoRemove=2;
    int newArray[3];
    for (int i = 0;i< sizeof(fixedArray)-1; i++)
    {
        if (i != indextoRemove)
        {
            newArray[i] = fixedArray[i];
        }
        //if want to append you need to copy the array and make a new one with new element
        //where as replace is fixedarray[index]= value;
        //remove is simple creeate a new array without the 
    }
    for (int a = 0; a < sizeof(newArray)-1; a++)
    {
        cout << newArray[a];
    }
    dynamicArray.pop_back();
}


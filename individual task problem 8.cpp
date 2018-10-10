#include <iostream>

using namespace std;

string *addEntry(string *dynamicArray , int&Size ,string newEntry)
{
    string *newArray = new string [Size+1];
    for(int i = 0 ; i < Size ; i++)
        newArray[i] = dynamicArray[i];
    newArray[Size] = newEntry;
    Size++;
    delete [] dynamicArray;
    return newArray;
}


string *deleteEntry(string *dynamicArray , int&Size ,string entryToDelete)
{
    bool x = false;
    for(int i = 0 ; i < Size ; i++)
    {
        if (dynamicArray[i] == entryToDelete)
            x=true;
    }
    if(x == false)
        return dynamicArray;
    else
    {
        string *newArray = new string [Size-1];
        int i = 0;
        int c = i;
        for(; i < Size-1 ; i++,c++)
        {
            if(dynamicArray[i] == entryToDelete)
                    c++;
            newArray[i]=dynamicArray[c];
        }
        Size--;
        delete [] dynamicArray;
        return newArray;
    }
}


int main()
{
    int Size=5;
    string *dynamicArray = new string[Size];
    dynamicArray[0]="Ahmed";
    dynamicArray[1]="Mohamed";
    dynamicArray[2]="Hussein";
    dynamicArray[3]="Omar";
    dynamicArray[4]="Hesham";

    string *h = addEntry(dynamicArray,Size,"mohsen");
    for(int i=0 ; i<Size ; i++)
        cout<<h[i]<<endl;

    cout<<"-------------------------\n";

    string *m=deleteEntry(h,Size,"Mohamed");
    for(int i=0 ; i<Size ; i++)
        cout<<m[i]<<endl;

    return 0;
}

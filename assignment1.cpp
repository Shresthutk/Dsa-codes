#include <iostream>
using namespace std;
class arr
{
public:
    int *ar;
    int uSize = 0, tSize = 0;
    int index, element;
    arr(int givenSize)
    {
        tSize = givenSize; //given size is the max size upto which we want our memory to be reserved
        ar = new int(tSize);
    }
    void setArray(int usedSize) //used size is the amount of memory of array that we want to use form the reserved memory
    {
        uSize = usedSize;
        if (usedSize > tSize)
        {
            cout << "Array length is less than given value";
        }
        else
        {
            for (int i = 0; i < usedSize; i++)
            {
                cout << "Enter the value for index " << i << " : ";
                cin >> ar[i];
            }
            cout << endl;
        }
    }
    void display()
    {
        if (uSize == 0)
        {
            cout << "Array is empty, nothing to display";
        }
        else
        {
            for (int i = 0; i < uSize; i++)
            {
                cout << "value of array at index " << i << " : " << ar[i] << endl;
            }
        }
        cout << endl;
    }
    int insertion(int index, int element)
    {
        if (uSize >= tSize)
        {
            return -1;
        }
        else
        {
            for (int i = uSize; i >= index; i--)
            {
                ar[i + 1] = ar[i];
            }
            ar[index] = element;
            uSize = uSize + 1;
            return 1;
        }
    }
    void deletion(int index)
    {
        if (uSize == 0)
        {
            cout << "Array is already empty, nothing to delete";
        }
        else
        {
            for (int i = index; i < uSize; i++)
            {
                ar[i] = ar[i + 1];
            }
            uSize = uSize - 1;
        }
    }
};

int main()
{
    cout << "Enter the size of array you want to create : ";
    int givenSize;
    cin >> givenSize;
    arr array1(givenSize);
input:
    cout << "Choose the operation you want to perform" << endl
         << "0 Set Array" << endl
         << "1 Display" << endl
         << "2 Insertion" << endl
         << "3 Deletion" << endl
         << "4 Exit" << endl;
    int uInput;
    cin >> uInput;
    switch (uInput)
    {
    case 0:
        cout << "Enter the no of elements you want to enter : ";
        int usedSize;
        cin >> usedSize;
        array1.setArray(usedSize);
        goto input;
        break;
    case 1:
        array1.display();
        goto input;
        break;
    case 2:
        int index, element;
        cout << "Enter the index where you want to insert : ";
        cin >> index;
        cout << "Enter the element which you want to insert : ";
        cin >> element;
        array1.insertion(index, element);
        goto input;
        break;
    case 3:
        cout << "Enter the index of element you want to delete : ";
        cin >> index;
        array1.deletion(index);
        goto input;
        break;
    case 4:
        goto out;
    default:
        cout << "Invalid input";
        goto input;
    }
out:;
}
#pragma once
#include <iostream>
#include <fstream>
using namespace std;
ofstream textfile;
template <class ItemType>
class Array
{
private:
    int size;
    ItemType* myArray;
public:
    //Constructor

    Array(int s)
    {
        size = s;
        myArray = new ItemType[size];
    }
    // copy constructor. Not needed
   // Array(const Array &obj);
    void setArray(int index, ItemType value)
    {
        myArray[index] = value;
    }
    //destructor
   // virtual ~Array()
   // {
   //    delete[] myArray;
   // }
    void getArray();
    void swap(ItemType* a, ItemType* b);

    void insertionSort(Array<ItemType> theArray, int n);
    void merge(Array<ItemType> theArray, int first, int mid, int last);
    void mergeSort(Array<ItemType> theArray, int first, int last);
    int partition(Array<ItemType> theArray, int low, int high);
    void quickSort(Array<ItemType> theArray, int low, int high);
    //Overloaded subscript operator
    ItemType& operator[](const int& c1);
    //Overloaded = operator
    void operator=(const Array& right);
    //A probably not necessary overloaded << 
   // friend ostream &operator << (ostream &, const Array &);
};

//Probably not necessary
//template <class ItemType>
//ostream& operator << (ostream &out, const Array<ItemType> &A1)
//{
//   size = A1.size;
//   for (int i = 0; i < size; i++)
//      out << A1[i] << " ";
//}

template <class ItemType>
void Array<ItemType>::operator=(const Array& right)
{
    delete[] myArray;
    size = right.size;
    myArray = new ItemType[size];
    for (int i = 0; i < size; i++)
        myArray[i] = right.myArray[i];
}


template <class ItemType>
void Array<ItemType>::getArray()
{
    for (int i = 0; i < size; i++)
        cout << myArray[i] << " ";
    // ofstream textfile;            //The text file stream
    // textfile.open("output.txt");  //The program opens output.txt file
    for (int i = 0; i < size; i++)      //When output.txt file is open then print to text file
    {
        textfile << myArray[i] << " ";  //Stores Array into text file
    }

    textfile.close();           //Close output.txt file

}

template <class ItemType>
int Array<ItemType>::partition(Array<ItemType> theArray, int low, int high)
{
    ItemType pivot = theArray[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (theArray[j] >= pivot)
        {
            i++;
            swap(&theArray[i], &theArray[j]);
        }
    }
    swap(&theArray[i + 1], &theArray[high]);
    cout << "\nQuick Sort Recursive step: " << endl;
    textfile << "\nQuick Sort Recursive step: " << endl;
    theArray.getArray();
    cout << " " << endl;
    return (i + 1);
}

template <class ItemType>
void Array<ItemType>::quickSort(Array<ItemType> theArray, int low, int high)
{
    if (low < high)
    {
        int pi = partition(theArray, low, high);

        quickSort(theArray, low, pi - 1);
        quickSort(theArray, pi + 1, high);
    }
}

template <class ItemType>
void Array<ItemType>::merge(Array<ItemType> theArray, int first, int mid, int last)
{
    Array<ItemType> tempArray(size);
    int first1 = first;
    int last1 = mid;
    int first2 = mid + 1;
    int last2 = last;

    int index = first1;
    while ((first1 <= last1) && (first2 <= last2))
    {
        if (theArray[first1] >= theArray[first2])
        {
            tempArray[index] = theArray[first1];
            first1++;
        }
        else
        {
            tempArray[index] = theArray[first2];
            first2++;
        }
        index++;
    }
    while (first1 <= last1)
    {
        tempArray[index] = theArray[first1];
        first1++;
        index++;
    }

    while (first2 <= last2)
    {
        tempArray[index] = theArray[first2];
        first2++;
        index++;
    }
    for (index = first; index <= last; index++)
        theArray[index] = tempArray[index];
    cout << "\nMerge Sort Recursive step: " << endl;
    textfile << "\nMerge Sort Recursive step: " << endl;
    theArray.getArray();
    cout << " " << endl;
}

template <class ItemType>
void Array<ItemType>::mergeSort(Array<ItemType> theArray, int first, int last)
{
    if (first < last)
    {
        int mid = first + (last - first) / 2;
        mergeSort(theArray, first, mid);
        mergeSort(theArray, mid + 1, last);
        merge(theArray, first, mid, last);
    }
}

//Needed for quicksort
template <class ItemType>
void Array<ItemType>::swap(ItemType* a, ItemType* b)
{
    ItemType t = *a;
    *a = *b;
    *b = t;
}

template <class ItemType>
ItemType& Array<ItemType>::operator[] (const int& sub)
{
    if (sub < 0 || sub >= size) {
        cout << "Out of bound" << endl;
        return myArray[0];
    }
    return myArray[sub];

}

template <class ItemType>
void Array<ItemType>::insertionSort(Array<ItemType> theArray, int n)
{
    if (n <= 1)
        return;

    insertionSort(theArray, n - 1);
    ItemType last = theArray[n - 1];
    int j = n - 2;

    while (j >= 0 && theArray[j] < last)
    {
        theArray[j + 1] = theArray[j];
        j--;
    }
    theArray[j + 1] = last;
    cout << "\nInsertion Sort Recursive step " << endl;
    textfile << "\nInsertion Sort Recursive step: " << endl;
    theArray.getArray();
    cout << " " << endl;
}

template <class T>
class Array2D
{
public:

    Array2D()
    {
        data = NULL;
        width = 0;
        height = 0;
    }

    Array2D(const int& width, const int& height)
    {
        data = NULL;
        allocate(width, height);
    }

    ~Array2D()
    {
        deallocate();
    }

    T& get(const int& y, const int& x)
    {
        return data[y][x];
    }

    void set(const T& t, const int& y, const int& x)
    {
        data[y][x] = t;
    }

    void setAll(const T& t)
    {
        for (int y = 0; y < height; y++)
        {
            for (int x = 0; x < width; x++)
            {
                data[y][x] = t;
            }
        }
    }

    int getWidth()
    {
        return width;
    }

    int getHeight()
    {
        return height;
    }

private:

    void allocate(const int& width, const int& height)
    {
        // Remember dimensions.
        this->width = width;
        this->height = height;

        // Allocate.
        data = new T * [height];
        for (int i = 0; i < height; i++)
        {
            data[i] = new T[width];
        }
    }

    void deallocate()
    {
        if (NULL == data)
        {
            // Nothing to do.
            return;
        }

        // Free the memory.
        for (int i = 0; i < height; i++)
        {
            delete[] data[i];
        }
        delete[] data;

        // Reset.
        width = 0;
        height = 0;
        data = NULL;
    }

    int width;
    int height;
    T** data;
};
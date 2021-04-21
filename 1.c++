#include <iostream>
using namespace std;
template<class T>
T sum(T a[], int n)
{
  T thesum = 0;
  return std::accumulate(a,a+n,thesum);
}
// int main(){    
//     cout << "well done！！！" << endl;
//   printf("hello!\n");
//     }
//选择排序
template <class T>
int indexOfMax(T a[], int n)
{
  if(n<0)
    throw illegalParameterValue("n must be >0")
  
  int indexOfMax = 0;
  for(int i = 1; i<n; i++)
  {
    if(a[indexOfMax]<a[i])
      indexOfMax = i;
  }
  return indexOfMax;
}


template <class T>
void selectionSort(T a[], int n)
{
  for(int size = n; size>1; size--)
  { 
    int j = indexOfMax(a,size);
    swap(a[j],a[size-1]);

  }
}
//冒泡排序
template <class T>
void bubble(T a[], int n)
{
  for(int i = 0; i < n-1; i++)
  {
    if(a[i] > a[i+1])
      swap(a[i], a[i+1])
  }
}

template <class T>
void bubbleSort(T a[], int n)
{
  for(int i=n; i>1; i++)
  {
    bubble(a,i);
  }
}

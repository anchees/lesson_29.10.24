#include <iostream>
using namespace std;

class array{
private: 
    int* arr;
    int size;
public:
    array(int sizeP)
        { size=sizeP, arr = new int[size] {0};}
    
    array(const array& object)
        : arr {new int [object.size]}, size {object.size} 
    {
        for (int i=0; i<size; i++){
            arr[i]=object.arr[i];
        };
    }

    ~array(){
        delete[] arr;
    }

    void newsize(array& first, array& now){
        for (int i=0; i<now.size; i++){
            if (i<first.size){
                now.arr[i]=first.arr[i];
            } else{
                now.arr[i]=rand()%100+1;
            }
        }
    }

    void random(){
        for (int i=0; i<size; i++){
            arr[i]=rand()%100+1;
        }
    }

    void print(){
        for (int i=0; i<size; i++){
            cout<<arr[i]<<"\t";
        }
        cout<<endl;
    }

    void sort(){
        int zap=0;
        for (int g=0;g<size-1;g++){
            for (int i=0;i<size-g-1;i++){
                if(arr[i]>arr[i+1]){
                    zap=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=zap;
                }
            }
        }
    }

    int max(){
        int max=arr[0];
        for (int i=0; i<size; i++){
            if (arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }

    int min(){
        int min=arr[0];
        for (int i=0; i<size; i++){
            if (arr[i]<min){
                min=arr[i];
            }
        }
        return min;
    }
};
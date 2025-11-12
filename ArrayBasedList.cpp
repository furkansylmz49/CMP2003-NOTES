#include <iostream>
#include <string>
using namespace std;

//------------------------------------------ARRAY BASED LİST-----------------------------------------------
template<class T>
class ArrayList{
    private:
        int size;
        int capacity;
        T* data;
    public:
        ArrayList(int capacity=4){
            this->capacity = capacity;
            size = 0;
            data = new T[capacity];
        }

        ~ArrayList() {
            delete[] data;
        }

        void resize(){
            capacity *= 2;
            T* newData = new T[capacity];
            
            for(int i=0; i<size; i++){
                newData[i] = data[i];
            }
            delete[] data;
            data = newData;
        }

        void add(T value){
            if(size == capacity){resize();}

            data[size++] = value;
        }

        void insert(int index, T value){
            if(index < 0 || index > size) throw out_of_range("Invalid index");
            if(size == capacity){resize();}

            for(int i=size; i>index; i--){
                data[i] = data[i-1];
            }
            data[index] = value;
            size++;
        }

        void remove(int index){
            if(index < 0 || index >= size) throw out_of_range("Invalid index");
            for(int i=index; i<size-1; i++){
                data[i] = data[i+1];
            }
            size--;
        }

        T get(int index){
            if (index < 0 || index >= size) throw out_of_range("Invalid index");
            return data[index];
        }

        void set(int index,T value){
            if(index < 0 || index >= size){throw "Error!!!";}

            data[index] = value;
        }

        int length(){return size;}

        bool isEmpty(){return size == 0;}

};
//-------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------
int main(){
    ArrayList<int> Arr;

    Arr.add(5);
    cout<<Arr.get(0)<<endl;
    Arr.insert(0,3);
    cout<<Arr.get(0)<<endl;

    return 0;
}
//-------------------------------------------------------------------------------------------------------
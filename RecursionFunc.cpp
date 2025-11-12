#include <iostream>
#include <string>
#include "SinglyLinkedList.cpp"
using namespace std;
//-------------------------------------------------------------------------------------------------------
long long factorial(int value){
    if(value == 1){return 1;}

    return value*factorial(value-1);
}
//-------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------
int fibonacci(int value){
    if(value <= 1){return value;}

    return fibonacci(value-1) + fibonacci(value-2);
}
//-------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------
int LinearSum(int A[], int size){
    if(size == 1){return A[0];}

    return A[size-1] + LinearSum(A,size-1);
}
//-------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------
void ReverseArray(int A[],int first,int end){
    if(first<end){
        int temp = A[first];
        A[first] = A[end];
        A[end] = temp;
        ReverseArray(A,first+1,end-1);
    }
}
//-------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------
int factorialTail(int value, int result=1){
    if(value == 1){return result;}

    return factorialTail(value-1,value*result);
}
//-------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------
int BinarySearch(int key,int A[],int LO,int HI){
    if(LO>HI){return -1;}

    int mid = (HI + LO)/2;
    if(A[mid] ==key){return mid;}
    else if(A[mid] > key){return BinarySearch(key,A,LO,mid-1);}
    else{return BinarySearch(key,A,mid+1,HI);}
}
//-------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------
template<class T>
void print(Node<T>* Head){
    if(Head == nullptr){return;}
    cout<<Head->value<<" ";
    print(Head->next);
}
//-------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------
template<class T>
int AddNodes(Node<T>* head){
    if(head== nullptr){return 0;}

    return head->value + AddNodes(head->next);
}
//-------------------------------------------------------------------------------------------------------

int main(){
    cout<<factorial(5)<<endl<<endl;
    cout<<factorialTail(5)<<endl<<endl;

    cout<<fibonacci(5)<<endl<<endl;

    int A[5] = {4,2,1,4,5};
    cout<<LinearSum(A,5)<<endl<<endl;

    ReverseArray(A,0,4);
    for(int i=0; i<5; i++){cout<<A[i]<<" ";}
    cout<<endl<<endl;

    int B[5] = {1,2,3,4,5};
    cout<<BinarySearch(3,B,0,4)<<endl<<endl;

    LinkedList<int> list;
    list.InsertLast(5);
    list.InsertLast(3);
    list.InsertLast(4);
    list.InsertLast(7);
    list.InsertLast(9);
    print(list.head);
    cout<<"\n\n"<<AddNodes(list.head)<<endl;

    return 0;
}
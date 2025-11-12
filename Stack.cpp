#include <iostream>
#include <string>
using namespace std;

//-------------------------------------------STACK WITH ARRAY--------------------------------------------
const int MAX_SİZE = 100;
template<class T>
class StackWArray{
    private:
        int top;
        T arr[MAX_SİZE];
    public:
        StackWArray(){top = -1;}

        bool isEmpty(){return top == -1;}

        void push(T value){
            if(top >= MAX_SİZE-1){cout<< "Stack overflow! Cannot push" <<value<<endl;}
            else{
                arr[++top] = value;
            }
        }

        void pop(){
            if(isEmpty()){cout << "Stack is empty. Cannot pop." <<endl;}
            else{top--;}
        }

        T peek(){
            if(isEmpty()){cout << "Stack is empty." <<endl; return -1;}
            else{return arr[top];}
        }

};
//-------------------------------------------------------------------------------------------------------
//---------------------------------------SINGLY NODE TYPE------------------------------------------------
template<class T>
struct Node{
    public:
        T value;
        Node<T>* next;
};
//-------------------------------------------------------------------------------------------------------
//-------------------------------------------STACK WITH LINKED LIST--------------------------------------
template<class T>
class StackWLinked{
    private:
        Node<T>* top;
    public:
        StackWLinked(){top = nullptr;}

        bool isEmpty(){return top == nullptr;}

        void push(T value){
            Node<T>* newNode = new Node<T>;
            newNode->value = value;
            newNode->next = top;
            top = newNode;
        }

        void pop(){
            if(isEmpty()){cout << "Stack is empty. Cannot pop." <<endl;}
            else{
                Node<T>* tmp = top;
                top = top->next;
                delete tmp;
            }
            
        }

        T peek(){
            if(isEmpty()){cout << "Stack is empty." <<endl; return -1;}
            else{
                return top->value;
            }
        }

};
//-------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------
int main(){
    StackWArray<int> stack1;

    stack1.push(10);
    stack1.push(20);
    stack1.push(30);
    cout << "Top element: " << stack1.peek() << endl;
    stack1.pop();
    cout << "After popping, top element: " << stack1.peek() <<endl;
//-------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------
    StackWLinked<int> stack2;

    stack2.push(10);
    stack2.push(20);
    stack2.push(30);
    cout << "Top element: " << stack2.peek() << endl;
    stack2.pop();
    cout << "After popping, top element: " << stack2.peek() << endl;
//-------------------------------------------------------------------------------------------------------
    return 0;
}

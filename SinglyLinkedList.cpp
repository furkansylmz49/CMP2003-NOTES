#include <iostream>
#include <string>
using namespace std;

//---------------------------------------SINGLY NODE TYPE------------------------------------------------
template<class T>
struct Node{
    public:
        T value;
        Node<T>* next;
};
//-------------------------------------------------------------------------------------------------------
//-------------------------------------------SINGLY LİNKED LİST------------------------------------------
template<class T>
class LinkedList{
    public:
        Node<T>* head;
        
        LinkedList(){head = nullptr;}

        bool isEmpty(){return head == nullptr;}
        
        void print(){
            Node<T>* tmp = head;
            while(tmp != nullptr){
                cout<<tmp->value<<" ";
                tmp = tmp->next;
            }
        }

        void InsertFirst(T value){
            Node<T>* newNode = new Node<T>;
            newNode->value = value;
            newNode->next = head;
            head = newNode;
        }

        T front(){return head->value;}
        T back(){
            Node<T>* tmp = head;
            while(tmp->next != nullptr){
                tmp = tmp->next;
            }
            return tmp->value;
        }

        void InsertLast(T value){
            Node<T>* newNode = new Node<T>;
            newNode->value = value;
            newNode->next = nullptr;

            if(isEmpty()){head = newNode;}
            else{
                Node<T>* tmp = head;
                while(tmp->next != nullptr){
                    tmp = tmp->next;
                }
            tmp->next = newNode;
            }
        }

        void RemoveFirst(){
            if(isEmpty()){throw "Error!!";}
            Node<T>* tmp = head;
            head = head->next;
            delete tmp;
        }

        int length(){
            int count=0;
            Node<T>* tmp = head;
            while(tmp != nullptr){
                count++;
                tmp = tmp->next;
            }
            return count;
        }

        void DestroyList(){
            Node<T>* tmp;
            while(head != nullptr){
                tmp = head;
                head = head->next;
                delete tmp;
            }

        }

        void RemoveLast(){
            if(isEmpty()){throw "Error!!";}

            if(head->next == nullptr){
                delete head;
                head = nullptr;
                return;
            }

            Node<T>* tmp = head;
            while(tmp->next->next != nullptr){
                tmp = tmp->next;
            }
            delete tmp->next;
            tmp->next = nullptr;
        }
};
//-------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------
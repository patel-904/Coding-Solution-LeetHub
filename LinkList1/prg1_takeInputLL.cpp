#include <iostream>
using namespace std; 

// Time Coplexity => O(n^2)    
/* we can use O(n) loop and one temp loop to find NULL 
   starting from = head 
   ending  = last index -1 
   1 = k 
   2 = k 
   3 = 2 
   |   |
   |   |
   n = n-1 
   total = O(n^2) 
   It is total bad time compexity 
   so we can use tail pointer 
   */

class Node {
    public : 
    int data; 
    Node *next ;

    //constructor
    Node(int data){
        this->data = data;
        next = NULL ;
    }
};

/* Rembember some things in case of takeInput 
   1)  No argument of a function 
   2)  we can use Node becuse return head   and its is pointer so use * 
   Main Approch 
   3)  we can find data -1 so exit the loop 
   4) first itration of a loop runing somoothly 
   5) secound itration  |10|NULL|  --> |20|NULL|            do't change head so use if else candition 
   6) take the dami variable to save the head 
   */

Node * takeInput(){   
    int data;
    cin >>data;
    Node *head = NULL ;     // starting mai NULL put karr diya INITALISING the head pointer 

    while( data != -1){
        //dynamic declartion 
        Node * newNode = new Node(data);
        
        if(head ==NULL){
        head = newNode ;     //newNode pointer , assume address is 100  | so , head = 100 
    }

        else{
            Node *temp = head; 
    
             while(temp->next !=NULL){
                temp = temp->next  ;    //update temp 
             }

             temp->next = newNode ;
        }
        cin >>data ;
    }
   return head;
}

void print(Node *head){
    Node * temp = head ;   //temprary variable 
    while(temp != NULL){
        cout << temp->data ;
        temp = temp->next ;    // update the temp 
    }
    // temp is finaly NULL 
    temp = head ;   // temp can redefine by using head pointer 
    
}

int main () {
    
    
    
    Node *head =  takeInput() ;
     print(head);
}





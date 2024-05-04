#include<stdio.h>

/*
Given the head of a linked list and an integer val, 
remove all the nodes of the linked list that has Node.val == val, 
and return the new head.
*/
struct ListNode{
    int val;
    struct ListNode * next;
};
struct ListNode * removeElements(struct ListNode *, int);

int main(){  

    return 0;
}

struct ListNode * removeElements(struct ListNode * head, int val){
      
     struct ListNode * newHead = NULL;
     struct ListNode * tempNode = NULL;
     newHead = head;
     int removeVal = val;
     
     //check if the list is empty
     if(head == NULL){
        return newHead;
     }
     //check if the first element is val value
     if(newHead->val == removeVal){
        while(newHead->val == removeVal){
             
        }
     }
     return newHead;

}
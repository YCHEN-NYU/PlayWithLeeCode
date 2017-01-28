/*
* You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

* You may assume the two numbers do not contain any leading zero, except the number 0 itself.

* Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
* Output: 7 -> 0 -> 8
 * Definition for singly-linked list.
 */
#include <iostream>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
    	ListNode * result(0);
    	ListNode * temp_node;
    	int temp_val = 0;
    	int count = 0;
	    while ((l1 != NULL) && (l2 != NULL)) 
	    {
	    	temp_node = new ListNode(0);
    		if((l1->val + l2->val + temp_val) < 10) {
    		    cout << "temp_node->val" << endl;
    			temp_node->val = l1->val + l2->val + temp_val;
    			temp_val = 0;
    		} 
    		else {
    			temp_node->val = l1->val + l2->val + temp_val - 10;
    			temp_val = 1;
    		}
    		
    		if(count == 0) {
    			result->val = temp_node->val;
    		}
    		else {
    			result->next = temp_node;
    			temp_node->next = NULL;
    		}
    		
    		l1 = l1->next;
    		l2 = l2->next;
    		result = result->next;
    		++count;
    	}

    	// load remaining digits
    	while((l1!=NULL)) {
    		temp_node = new ListNode(0);
    		if((l1->val + temp_val) < 10) {
    			temp_node->val = l1->val + temp_val;
    			temp_val = 0;
    		}
    		else {
    			temp_node->val = l1->val + temp_val - 10;
    			temp_val = 1;
    		}
    		result->next = temp_node;
    		temp_node->next = NULL;
    		
    		l1 = l1->next;
    		result = result->next;
    	}

    	while((l2!=NULL)) {
    		temp_node = new ListNode(0);
    		if((l2->val + temp_val) < 10) {
    			temp_node->val = l2->val + temp_val;
    			temp_val = 0;
    		}
    		else {
    			temp_node->val = l2->val + temp_val - 10;
    			temp_val = 1;
    		}
    		result->next = temp_node;
    		temp_node->next = NULL;
    		
    		l2 = l2->next;
    		result = result->next;
    	}
    
    return result;
    }

};

int main() {

}

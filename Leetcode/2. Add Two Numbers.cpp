#include <bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *answer = NULL;
        ListNode **curNode = &answer;
        int cur = l1->val + 	l2->val;
        bool excessVal = false;

        if (cur >= 10){
            excessVal = true;
            cur %= 10;
        }
            
        (*curNode) = new ListNode(cur);
        curNode = &((*curNode)->next);
        // cout << answer->val << endl;
            
        while (l1->next != NULL && l2->next != NULL){
            l1 = l1->next;
            l2 = l2->next;
            
            cur = l1->val + l2->val + (excessVal? 1 : 0);

            if (cur >= 10){
                excessVal = true;
                cur %= 10;
            } else {
                excessVal = false;
            }

            (*curNode) = new ListNode(cur);
            curNode = &((*curNode)->next);
        }

        while (l1->next != NULL){
        	l1 = l1->next;
        	cur = l1->val + (excessVal? 1 : 0);

        	if (cur >= 10){
        	    excessVal = true;
        	    cur %= 10;
        	} else {
        	    excessVal = false;
        	}

        	(*curNode) = new ListNode(cur);
            curNode = &((*curNode)->next);
        }

        while (l2->next != NULL){
        	l2 = l2->next;
        	cur = l2->val + (excessVal? 1 : 0);

        	if (cur >= 10){
        	    excessVal = true;
        	    cur %= 10;
        	} else {
        	    excessVal = false;
        	}

        	(*curNode) = new ListNode(cur);
            curNode = &((*curNode)->next);
        }

        if (excessVal)
        {
    		(*curNode) = new ListNode(1);
    	    curNode = &((*curNode)->next);
        }
        
        return answer;
    }
};


int main() {
	ListNode l1_1 = ListNode(2);
	ListNode l1_2 = ListNode(4);
	ListNode l1_3 = ListNode(3);
	l1_1.next = &l1_2;
	l1_2.next = &l1_3;

	ListNode l2_1 = ListNode(5);
	ListNode l2_2 = ListNode(6);
	ListNode l2_3 = ListNode(4);
	l2_1.next = &l2_2;
	l2_2.next = &l2_3;

	Solution sol;
	ListNode *answer = sol.addTwoNumbers(&l1_1, &l2_1);

	cout << (answer->val) << endl;
	cout << (answer->next->val) << endl;
	cout << (answer->next->next->val) << endl;
 
	return 0;
}
/*
METHOD 1 (Use a Stack) 

A simple solution is to use a stack of list nodes. This mainly involves three steps.

Traverse the given list from head to tail and push every visited node to stack.

Traverse the list again. For every visited node, pop a node from the stack and compare data of popped node with 
the currently visited node.

If all nodes matched, then return true, else false.
*/

class Solution{
  public:

    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        // Temp pointer
        Node* slow= head;
 
        // Declare a stack
        stack <int> s;
  
 
        // Push all elements of the list
        // to the stack
        while(slow != NULL){
                s.push(slow->data);
 
                // Move ahead
                slow = slow->next;
        }
 
        // Iterate in the list again and
        // check by popping from the stack
        while(head != NULL ){
             
            // Get the top most element
             int i=s.top();
 
             // Pop the element
             s.pop();
 
             // Check if data is not
             // same as popped element
            if(head -> data != i){
                return false;
            }
 
            // Move ahead
           head=head->next;
        }
 
return true;
        
    }
};

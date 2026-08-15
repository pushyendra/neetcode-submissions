struct node{
        int val;
        node* next;
};

class MinStack {
public:
    int min=INT_MAX;
    node* head;

    MinStack() {
        head = new node();
        head->val = 0;
        head->next = NULL;
    }
    
    void push(int val) {
        node* temp = new node();
        temp->val = val;
        temp->next = NULL;

        if(head->next == NULL){
        head->next = temp;
        }else{
            temp->next = head->next;
            head->next = temp;
        }

        if(val < min){
            min = val;
        }
    }
    
    void pop() {
        if(head->next == NULL){
            return;
        }else{
            head->next = head->next->next;
        }
    }
    
    int top() {
        int temp=0;
        temp = head->next->val;
        return temp;
    }
    
    int getMin() {
        node* temp = head; int min = INT_MAX;
        while(temp->next != NULL){
            temp = temp->next;
            int num = temp->val;
            if(num < min){
                min = num;
            }
        }

        return min;
    }
};

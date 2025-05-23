struct stack_node{
    int val;
    stack_node* next{ };
    stack_node* prev{ };
    int minimum_element_sofar = INT_MAX;
    stack_node(int val) : val(val){};
};
class MinStack {
    stack_node* Top;
public:
    MinStack() {
        Top = nullptr;
    }
    void link_utiliy(stack_node* first, stack_node* second)
    {
        first->next = second;
        second->prev = first;
    }
    void push(int val) 
    {
        stack_node* item = new stack_node(val);
        if(!Top)
            {
            Top = item;
            Top->minimum_element_sofar = item->val;
            }

        else
        {
            link_utiliy(Top,item);
            Top = Top->next;
            Top->minimum_element_sofar = min(Top->val,Top->prev->minimum_element_sofar);
   
        }
        
    }
    
    void pop() 
    {
        stack_node* cur = Top;
        Top = Top->prev;
        delete cur ;
    }
    
    int top() {
        if(Top)
            return Top->val;
        return INT_MIN;
    }
    
    int getMin() {
        if(Top)
            return Top->minimum_element_sofar;
        return INT_MAX;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
1class MinStack {
2    private Stack<Integer> myStack;
3    private Stack<Integer> minStack; 
4    public MinStack() {
5        myStack = new Stack<>();
6        minStack = new Stack<>();
7    }
8    
9    public void push(int val) {
10        myStack.push(val);
11        if(minStack.isEmpty() || val <= minStack.peek())
12            minStack.push(val);
13    }
14    
15    public void pop() {
16        Integer deletedVal = myStack.pop();
17        if(deletedVal.equals(minStack.peek()))
18            minStack.pop();
19    }
20    
21    public int top() {
22        return myStack.peek();
23    }
24    
25    public int getMin() {
26        return minStack.peek();
27    }
28}
29
30/**
31 * Your MinStack object will be instantiated and called as such:
32 * MinStack obj = new MinStack();
33 * obj.push(val);
34 * obj.pop();
35 * int param_3 = obj.top();
36 * int param_4 = obj.getMin();
37 */
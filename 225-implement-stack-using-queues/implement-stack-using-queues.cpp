class MyStack {
public:
queue<int>q1;
    MyStack() {
        
    }
    
    void push(int x) {
        int i=q1.size();
        for(int j=0;j<i;j++)
        {
int you=q1.front();
q1.pop();
q1.push(you);
        }
        i=q1.size();
        q1.push(x);
             for(int j=0;j<i;j++)
        {
int you=q1.front();
q1.pop();
q1.push(you);
        }

    }
    
    int pop() {
        int i=q1.front();
        q1.pop();
        return i;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.size()==0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
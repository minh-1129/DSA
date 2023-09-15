#include<bits/stdc++.h>
using namespace std;
template<class data>
class Stack{
private:
    queue<data> q1;
    queue<data> q2;
public:
    void push(data x){
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
    void pop(){
        q1.pop();
    }
    data top(){
        return q1.front();
    }
    bool isEmpty(){
        return q1.empty();
    }
};
int main(){
    Stack<int> st;
    for(int i = 1; i <= 10; i++){
        st.push(i);
    }
    while(!st.isEmpty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}

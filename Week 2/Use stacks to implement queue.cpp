#include<bits/stdc++.h>
using namespace std;
template<class data>
class Queue{
private:
    stack<data> s1;
    stack<data> s2;

public:
    bool isEmpty() {
        return s2.empty();
    }
    void enqueue(data x) { //push
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        s2.push(x);
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
    }
    void dequeue() { //remove first element
        if(s2.empty())
        {
            cout<<"Error: empty queue\n";
            exit(EXIT_FAILURE);
        }
        data tmp = s2.top();
        s2.pop();
    }
    data peek() {  //return first element of queue
        if(s2.empty())
        {
            cout<<"Error: empty queue\n";
            exit(EXIT_FAILURE);
        }
        return s2.top();
    }
    int Size(){
        return s2.size();
    }
};
int main(){
    Queue<int> q;
    for(int i = 0; i <= 10; i++){
        q.enqueue(i);
    }
    cout<<"Number of elements in queue is: "<<q.Size()<<'\n';
    cout<<"First element in queue is: "<<q.peek()<<'\n';
    cout<<"Print all elements in queue:"<<'\n';
    while(!q.isEmpty()){
        cout<<q.peek()<<'\n';
        q.dequeue();
    }
    cout<<q.peek();
    cout<<1;
    return 0;
}

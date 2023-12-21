#include <bits/stdc++.h> 

using namespace std;


class Queue {
    private:
    int *arr;
    int qfront;
    int rear;
    int size;
public:
    Queue(int s) {
        size=s;
        arr=new int[s];
        qfront=0;
        rear=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(qfront==rear)
        {
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data) {
        if(rear==size)
        {
            cout<<"queue is overflow"<<endl;
        }
        else
        {
            arr[rear]=data;
            rear++;
        }
    }

    int dequeue() {
        if(qfront==rear)
        {
            return -1;

        }
        else{
            int ans=arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront==rear)
            {
                qfront=0;
                rear=0;
            }
            return ans;
        }
    }

    int front() {
        if(qfront==rear)
        {
            return -1;
        }
        else{
            return arr[qfront];
        }
    }
};

int main()
{   int n;
    
    cout<<"enter size of queue you want"<<endl;
    cin>>n;

    Queue q(n);
    cout<<"enter 4 elements that you want to insert in queue"<<endl;
    for(int i=0;i<4;i++)
    {
        cin>>n;
        q.enqueue(n);
    }
    cout<<"now first element is"<<q.front()<<endl;
    return 0;

}

//circular queue
#include <bits/stdc++.h> 
class CircularQueue{
    int*arr;
    int size;
    int front;
    int rear;


    public:
    // Initialize your data structure.
    CircularQueue(int n){
        size=n;
        arr=new int[n];
        front=-1;
        rear=-1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1)))
        {  //queue is full
             return false;
        }
        else if(front==-1)
        {
            //1st element aya hai for push
            front=rear=0;

            
        }
        else if(rear==size-1 && front!=0)
        {
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear]=value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        //empty queue
        if(front==-1)
        {
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1;
        //1st element
        if(front==rear)
        {
           front=rear=-1;
        }
        //cyclic nature
        else if(front==size-1){
           front=0;
        }
        //normal flow
        else{
            front++;
        }
        return ans;
    }
};

//double ended queue
class Deque
{	
    int *arr;
    int front;
    int rear;
    int size;
public:
    // Initialize your data structure.
    Deque(int n)
    {
        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        //check full or not
        if( isFull() ) {
            return false;
        }
        else if(isEmpty()) {
            front  = rear = 0;
        }
        else if(front == 0 && rear != size-1) {
            front = size-1;
        } 
        else
        {
            front--;
        }
        arr[front] = x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        if( isFull() ) {
            return false;
        }
        else if(isEmpty()) {
            front  = rear = 0;
        }
        else if(rear == size-1 && front != 0) {
            rear = 0;
        } 
        else
        {
             rear++;
        }
        arr[rear] = x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        if(isEmpty()){//to check queue is empty
            //cout << "Queue is Empty " << endl;
            return -1;
        }
        
        int ans = arr[front];
        arr[front] = -1;
        
        if(front == rear) { //single element is present
            front = rear = -1;
        }
        else if(front == size - 1) {
            front = 0; //to maintain cyclic nature
        }
        else
        {//normal flow
            front++;
        }
        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
         if(isEmpty()){//to check queue is empty
            //cout << "Queue is Empty " << endl;
            return -1;
        }
        
        int ans = arr[rear];
        arr[rear] = -1;
        
        if(front == rear) { //single element is present
            front = rear = -1;
        }
        else if(rear == 0) {
            rear = size-1; //to maintain cyclic nature
        }
        else
        {//normal flow
            rear--;
        }
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
       if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if(front == -1)
            return true;
        else
            return false;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
		if( (front == 0 && rear == size-1) || (front != 0 && rear == (front-1)%(size-1) ) ) {
            return true;
        }
        else
        {
            return false;
        }
    }
};


//deque implement by aaju
#include <bits/stdc++.h> 
class Deque
{
    int *arr;
    int front;
    int rear;
    int size;
public:
    // Initialize your data structure.
    Deque(int n)
    {
        size=n;
        front=-1;
        rear=-1;
        arr=new int[size];
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        // Write your code here.
        if((front==0 && rear==size-1) || front==rear+1)
        {
            return false;
        }
        else if(front==-1)
        {
            front=rear=0;
        }
        else if(front==0 && rear!=size-1)
        {
            front=size-1;
        }
        else{
            front--;
        }
        arr[front]=x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
         if((front==0 && rear==size-1) || front==rear+1)
        {
            return false;
        }
        else if(front==-1)
        {
            front=rear=0;
        }
        else if(front!=0 && rear==size-1)
        {
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear]=x;
        return true;

    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        
        if(front==-1)
        {
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1;
        //1st element
        if(front==rear)
        {
           front=rear=-1;
        }
        //cyclic nature
        else if(front==size-1){
           front=0;
        }
        //normal flow
        else{
            front++;
        }
        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        if(front==-1)
        {
            return -1;
        }
        int ans=arr[rear];
        arr[rear]=-1;
        //1st element
        if(front==rear)
        {
           front=rear=-1;
        }
        //cyclic nature
        else if(rear==0){
           rear=size-1;
        }
        //normal flow
        else{
            rear--;
        }
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if(isEmpty())
        {
            return -1;
        }
        else{
            return arr[front];
        }
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if(isEmpty())
        {
            return -1;
        }
        else{
            return arr[rear];
        }
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
         if(front==-1)
         {
             return true;
         }
         else{
             return false;
         }
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        if((front==0 && rear==size-1) || (front!=0 && (rear==(front-1)%(size-1))))
        {                               //above:front=rear+1
            return true;
        }
        else{
            return false;
        }
    }
};
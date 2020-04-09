#include <iostream>
#define SIZE 5
using namespace std;

class myqueue
{
    int *arr;
    int first;
    int last;

public:
    myqueue( int Size = SIZE);
    ~myqueue();
    int Size;
    void push (int x);
    void pop();
    void getqueue();
    bool isEmpty();
    int front();
    int back();
    int size();

};
myqueue::myqueue(int Size){
    arr = new int [Size];
    first = 0;
    last = 0;
}

myqueue::~myqueue(){
delete arr;
}
void myqueue::push(int x) {
    if((last+1 == first)||((last+1 == Size) && (!first) )) {
        cout << "full";
        cout << endl;
        return;
    }
    last++;
    if (last == Size) last = 0;
    arr[last] = x;
}
void myqueue::pop(){
    if (first == last) {
        cout << "empty";
        cout << endl;
        return;
    }
    first++;
    if (first == Size) first = 0;
}
int myqueue::size(){
    int sum = 0;
    for (int i = first; i < last; i++)
        sum++;
    return sum;
}
int myqueue::back(){
    return arr[last];
}
int myqueue::front(){
    return arr[first+1];
}
void myqueue::getqueue(){
    for (int i = first + 1; i <= last; i++)
        cout << arr[i] << "\t";
}
bool myqueue::isEmpty(){
    return first==last;
}
int main()
{
    myqueue queuee;
    int k;
    cout << "number of queue items: ";
    cin >> k;
    for (int i = 1; i <= k; i++)
       {queuee.push(i);}

    if (!queuee.isEmpty())
    {
        queuee.getqueue();
        cout << "\nfirst number: " << queuee.front() << endl;
        cout << "last number: " << queuee.back() << endl;
        cout << "size of queue: " << queuee.size()<< endl << endl;

        int p;
        cout << "number you want to add to the queue: ";
        cin >> p;
        queuee.push(p);
        queuee.pop();
        cout << "queue with a new element and without the first:\n";
        queuee.getqueue();
        cout << "\nnew first number: " << queuee.front() << endl;
        cout << "new last number: " << queuee.back() << endl;
        cout << "new size of queue: " << queuee.size() << endl;
    }
    else cout << "\nqueue is empty";

    return 0;
}

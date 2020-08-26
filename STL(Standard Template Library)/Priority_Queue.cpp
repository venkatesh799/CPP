#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> Q;
    Q.push(103);
    Q.push(200);
    Q.push(30);
    Q.push(390);
    while(!Q.empty())
    {
        cout<<Q.top()<<endl; // we will get the output in descending order
        Q.pop();
    }
    return 0;
}


//Priority queues are a type of container adapters, specifically designed
//such that the first element of the queue is the greatest of all elements in the queue and
//elements are in non increasing order(hence we can see that each element of the queue has a priority{fixed order}).

//---------------------------------------------To Get Elements in Ascending Order------------------------
// Simply use  priority_queue<int,greater<int>>> Q;

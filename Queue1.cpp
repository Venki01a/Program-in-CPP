#include <iostream>
using namespace std;

void Enqeue(int *arr, int n, int size,  int &rear , int &front)
{

    if (rear == size - 1)
    {
        cout << "Queue is full " << endl;
        return;
    }
    else
    {
        if (front == rear && front < 0)
        {
            front++;
            rear++;
            arr[front] = n;
        }
        else
        {
            rear++;
            arr[rear] = n;
        }
    }
}
void Dequeue(int *arr, int &front, int &rear)
{
    if (front == -1 && rear == -1)
    {
        cout << " Queue is Empty -->" << endl;
    }

    else
    {
        cout << arr[front] << " is deleted" << endl;
        front += 1;
    }
}

void print(int *arr, int &rear, int &front)
{
    for (int i = front; i <= rear; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[100];
    int n, size;
    int front = -1;
    int rear = -1;
    cout<< "Enter no of elements to store: "<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        if (rear == size - 1)
        {
            cout << "Queue is full " << endl;
            break;
        }
        cout << "Enter the element to insert --> ";
        cin >> n;
        Enqeue(arr, n, size, rear, front);
    }
    print(arr, rear, front);

    cout << "Enter the no. of elements to be deleted :" << endl;
    int m;
    cin >> m;
    if (m <= size)
    {
        for (int i = front; i < m; i++)
        {
            Dequeue(arr, front, rear);
        }
    }
    else
    {
        cout << "Enter valid input " << endl;
    }
    if (front == -1 && rear == -1)
    {
        cout << " Queue is Empty -->" << endl;
        goto L1;
    }

    print(arr, rear, front);
L1:
;
}
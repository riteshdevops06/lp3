#include <iostream>
using namespace std;
//fibonacci Recursive
int fibo_recur(int num)
{
    if(num==1){
        return 1;
    }
    else if(num==0){
        return 0;
    }
    else
    {
        return fibo_recur(num-1)+fibo_recur(num-2);
    }
}

void fibo(int num)
{
    int a=0,b=1,c;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<num;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}

void TowerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        cout << "Move disc 1 from " << source << " to " << destination << endl;
        return;
    }

    TowerOfHanoi(n - 1, source, auxiliary, destination); // Step 1
    cout << "Move disc " << n << " from " << source << " to " << destination << endl; // Step 2
    TowerOfHanoi(n - 1, auxiliary, destination, source); // Step 3
}

int main()
{   
    int choice;
    int flag;
    int n;
    char a='A',b='B',c='C';
    cout<<"Enter the appropriate choice: \n"<<"1. Fibonacci \n"<<"2. Tower of Hanoi \n";
    cin>>choice;
    switch (choice)
    {
        case 1:
        cout<<"Enter the appropriate choice: \n"<<"1. Recursive \n"<<"2. Non-Recursive \n";
        cin>>flag;
        switch (flag)
        {
            case 1:
            cout<<"Enter the number of terms: ";
            cin>>n;
            for(int i=0;i<n;i++)
            {
            cout<<fibo_recur(i)<<" ";
            }
            break;
            case 2:
            cout<<"Enter the number of terms: ";
            cin>>n;
            fibo(n);
            break;
            default:
            cout << "Invalid choice!\n";
            break;
        }
        break;
        case 2:
        cout<<"Enter the number of discs ";
        cin>>n;
        TowerOfHanoi(n,a,b,c);
        break;
        default:
        cout << "Invalid choice!\n";
        break;
    } 
    return 0;
}


// tower_of_hanoi(3, A, B, C)
// │
// ├── tower_of_hanoi(2, A, C, B)          # Move top 2 disks A→B using C
// │   │
// │   ├── tower_of_hanoi(1, A, B, C)      # Move disk 1 A→C
// │   │     → Move disk 1 from A to C
// │   │
// │   ├── Move disk 2 from A to B         # Move 2nd disk A→B
// │   │
// │   └── tower_of_hanoi(1, C, A, B)      # Move disk 1 C→B
// │         → Move disk 1 from C to B
// │
// ├── Move disk 3 from A to C              # Move largest disk A→C
// │
// └── tower_of_hanoi(2, B, A, C)          # Move 2 disks B→C using A
//     │
//     ├── tower_of_hanoi(1, B, C, A)      # Move disk 1 B→A
//     │     → Move disk 1 from B to A
//     │
//     ├── Move disk 2 from B to C         # Move 2nd disk B→C
//     │
//     └── tower_of_hanoi(1, A, B, C)      # Move disk 1 A→C
//           → Move disk 1 from A to C


// fib(4)
// ├─ fib(3)
// │  ├─ fib(2)
// │  │  ├─ fib(1) → 1
// │  │  └─ fib(0) → 0
// │  └─ fib(1) → 1
// └─ fib(2)
//    ├─ fib(1) → 1
//    └─ fib(0) → 0

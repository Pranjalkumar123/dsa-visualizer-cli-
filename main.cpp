
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

void stackOperations() {
    stack<int> st;
    int choice, val;

    do {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n2. Pop\n3. Top\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> val;
                st.push(val);
                cout << val << " pushed to stack.\n";
                break;
            case 2:
                if (!st.empty()) {
                    cout << st.top() << " popped from stack.\n";
                    st.pop();
                } else {
                    cout << "Stack is empty.\n";
                }
                break;
            case 3:
                if (!st.empty()) {
                    cout << "Top element: " << st.top() << endl;
                } else {
                    cout << "Stack is empty.\n";
                }
                break;
            case 4:
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 4);
}

void queueOperations() {
    queue<int> q;
    int choice, val;

    do {
        cout << "\n--- Queue Menu ---\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Front\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> val;
                q.push(val);
                cout << val << " enqueued to queue.\n";
                break;
            case 2:
                if (!q.empty()) {
                    cout << q.front() << " dequeued from queue.\n";
                    q.pop();
                } else {
                    cout << "Queue is empty.\n";
                }
                break;
            case 3:
                if (!q.empty()) {
                    cout << "Front element: " << q.front() << endl;
                } else {
                    cout << "Queue is empty.\n";
                }
                break;
            case 4:
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 4);
}

void linearSearch() {
    vector<int> arr;
    int n, x;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    cout << "Enter element to search: ";
    cin >> x;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            cout << x << " found at index " << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << x << " not found.\n";
    }
}

void bubbleSort() {
    vector<int> arr;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }

    cout << "Sorted Array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    int choice;

    do {
        cout << "\n=== DSA Visualizer CLI ===\n";
        cout << "1. Stack Operations\n";
        cout << "2. Queue Operations\n";
        cout << "3. Linear Search\n";
        cout << "4. Bubble Sort\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1: stackOperations(); break;
            case 2: queueOperations(); break;
            case 3: linearSearch(); break;
            case 4: bubbleSort(); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}

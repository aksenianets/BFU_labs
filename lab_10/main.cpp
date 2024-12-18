#include <iostream>
#include <cmath>

using namespace std;

struct Node {
    int info;    
    Node * next; 
};

bool starts_with_3(int num) {
    while (num >= 10) {
        num /= 10;
    }
    return num == 3;
}

bool is_prime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void print_list(Node * top) {
    Node * p = top;
    while (p != nullptr) {
        cout << p->info << " ";
        p = p->next;
    }
}

bool number_starting_with_3(Node * top) {
    Node * p = top;
    while (p != nullptr) {
        if (starts_with_3(p->info)) return true;
        p = p->next;
    }
    return false;
}

void sort_by_last_digit(Node * top) {
    for (Node * a = top; a->next != nullptr; a = a->next)
        for (Node * b = a->next; b != nullptr; b = b->next)
        {
            short last_digit_a = a->info % 10;
            short last_digit_b = b->info % 10;
            if (last_digit_a < last_digit_b)
                swap(a->info, b->info);
        }
}

void process_list(Node * &top) {
    if (!number_starting_with_3(top)) {
        sort_by_last_digit(top);
        return;
    }

    Node * curr = top;
    Node * prev = nullptr;

    while (curr != nullptr) {
        bool is_current_prime = is_prime(curr->info);
        
        if (curr->info % 2 == 0 && curr->info != 2) {
            Node * temp = curr;
            if (prev == nullptr) {
                top = curr->next;
                curr = top;
            } else {
                prev->next = curr->next;
                curr = curr->next;
            }
            delete temp;
            continue;
        }
        
        if (is_current_prime) {
            Node * new_node = new Node;
            new_node->info = curr->info;
            new_node->next = curr->next;
            curr->next = new_node;
            curr = new_node->next;
            prev = new_node;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }
}

void delete_list(Node * top) {
    Node * p = top;
    while (p != nullptr) {
        Node * temp = p->next;
        delete p;
        p = temp;
    }
}

int main() {
    Node * top = nullptr;
    int n;
    cin >> n;

    int x;
    cin >> x;
    top = new Node;
    top->info = x;
    top->next = nullptr;
    Node * pp = top;

    for (int i = 1; i < n; i++) {
        cin >> x;
        Node * p = new Node;
        pp->next = p;
        p->info = x;
        p->next = nullptr;
        pp = p;
    }

    process_list(top);
    print_list(top);
    cout << endl;

    delete_list(top);
    return 0;
}

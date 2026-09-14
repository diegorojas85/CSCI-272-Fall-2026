#include <iostream>
#include <string>
using namespace std;

int global_var = 77;

void changePointer(int** p){
    // *p represents the original pointer
    *p = &global_var;
}

int main(){
    int local_var = 15;
    
    int* p_to_var = &local_var;
    
    cout << "Before: " << endl;
    cout << "local_var=" << local_var << endl;
    cout << "p_to_var=" << *p_to_var << endl;
    cout << "*p_to_var=" << p_to_var << endl;
    
    changePointer(&p_to_var);
    
    cout << "After: " << endl;
    cout << "local_var=" << local_var << endl;
    cout << "p_to_var=" << *p_to_var << endl;
    cout << "*p_to_var=" << p_to_var << endl;
    return 0;
}
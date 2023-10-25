/*
 * Author:
 * Date:
 * Name:
 */
//
// Created by computter on 25/10/2023.
//

#ifndef task_2
#define task_2
using namespace std;
//problem 2
#pragma clang diagnostic push
#pragma ide diagnostic ignored "cert-msc51-cpp"
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int n;

    srand((unsigned int) time(nullptr));
    int random_integer;
    random_integer = rand()%101 ;

    while (true){
        cin>>n;
        if(n==random_integer){
            cout<<"Yes"<<endl;

            break;
        }
        if(random_integer>n){
            cout<<"Too Low"<<endl;
        }
        if(random_integer<n){
            cout<<"Too High"<<endl;

        }
    }
  return 0;
}

#pragma clang diagnostic pop

#endif //task_2

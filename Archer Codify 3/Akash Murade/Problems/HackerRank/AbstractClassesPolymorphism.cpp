// https://www.hackerrank.com/challenges/abstract-classes-polymorphism/problem
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};
class LRUCache: public Cache {
    public:    
    LRUCache(int capacity) {
        cp = capacity;
        head = tail = NULL;
    }
    
    void set(int k, int v) {
        // if key is not already present
        map<int, Node*>::iterator it = mp.find(k);
        if(it == mp.end()) {
            // for removing the tail
            if(mp.size() == cp) {
                mp.erase(tail -> key);
                if(tail == head) {
                    delete tail;
                    tail = head = NULL;
                }
                else {
                    tail = tail -> prev;
                    delete tail -> next;
                    tail -> next = NULL;
                }
            }
            Node* temp = new Node(NULL, head, k, v);
            if(head) {
                head -> prev = temp;
                head = temp;
            }
            else {
                head = tail = temp;
            }
            mp[k] = temp;
        }
        else {
            it -> second -> value = v;
        }
    }  
    
    int get(int k) {
        map<int, Node*>::iterator it = mp.find(k);
        if(it == mp.end()) {
            return -1;
        }

        return it -> second -> value;    }
};

int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}

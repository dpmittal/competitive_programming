#include<string>
using namespace std;

template<typename T>

class node{
    public:
        string key;
        T value;
        node<T>* next;

        node(string key, T value){
            this->key = key;
            this->value = value;
            next = NULL;
        }

        ~node(){
            if(next != NULL){
                delete next;
            }
        }
};

template<typename T>
class Hashtable{
    node<T> **table;
    int tableSize;
    int current_size;

    int hashFn(string key){
        int L = key.length();
        int p = 1;
        int ans = 0;
        for(int i=0;i<L;i++){
            ans = (ans + key[L - i - 1]*p)%tableSize;
            p=(p*37)%tableSize;
        }

        return ans;
    }

    void rehash(){
        node<T>**oldTable = table;
        int oldTableSize = tableSize;
        table = new node<T>*[2*tableSize];
        tableSize *= 2;
        current_size = 0;

        for(int i=0;i<tableSize;i++){
            table[i] = NULL;
        }

        //Iterate over table and insert entries into new table
        for(int i=0;i<oldTableSize;i++){
            node<T>*temp = oldTable[i];

            while(temp!=NULL){
                insert(temp->key, temp->value);
                temp = temp->next;
            }

            if(oldTable[i] != NULL)
                delete(oldTable[i]);
        }

        delete [] oldTable;
    }

    public:
        Hashtable(int defaultSize = 7){
            tableSize = defaultSize;
            table = new node<T>*[tableSize];
            current_size = 0;

            for(int i=0;i<tableSize;i++) table[i] = NULL;
        }

        void insert(string key, T value){
            //Calculate hash
            int index = hashFn(key);
            node<T> *n = new node<T>(key, value);

            //Insert at head of ith linked list
            n->next = table[index];
            table[index] = n;
            current_size++;

            float load_factor = (current_size)/(1.0*tableSize);
            if(load_factor > 0.7){
                rehash();
            }
        }

        T* search(string key){
            int index = hashFn(key);

            node<T>* temp = table[index];
            while(temp != NULL){
                if(temp->key == key){
                    return &(temp->value);
                }
                temp = temp->next;
            }

            return NULL;
        }

        void print(){
            for(int i=0;i<tableSize;i++){
                node<T>* temp = table[i];
                cout<<"Bucket "<<i<<"=>";
                while(temp != NULL){
                    cout<<'('<<temp->key<<", "<<temp->value<<')'<<"->";
                    temp = temp->next;
                }
                cout<<'\n';
            }
        }

        T& operator[](string key){
            T* temp = search(key);

            if(temp == NULL){
                T garbage;
                insert(key, garbage);
                temp = search(key);
                return *temp;
            }

            else{
                return *temp;
            }
        }
};
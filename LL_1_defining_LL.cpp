struct node{
    int data;
    node *next;
};

node *first = NULL;

void create(int A[], int n){
    int i ;
    node *t,*last;
    
    first = new node;
    first -> data = A[0];
    
    first -> next = NULL;
    last = first;
    
    for(i = 1; i < n ; i++){
        t  = new node;
        t -> data = A[i];
        t -> next = NULL;
        last -> next = t;
        last = t;
    }
}

void print(node *p){
    while(p != 0){
        cout << p -> data << endl;
        p = p -> next;
    }
}

void count(node *p){
    int c = 0;
    while(p != 0){
        c++;
        p = p-> next;
    }
    cout << c;
}

void add(node *p){
    int sum = 0;
    while(p){
        sum += p-> data;
        p = p -> next;
    }
    cout << sum;
}

void maxx(node *p){
    int max = INT_MIN;
    while(p != NULL){
        int temp = p -> data;
        if(max < temp){
            max = temp;
        }
        
        // else conditon below
        p = p -> next;

    }
    cout << max;
}

void minn(node *p){
    int min = INT_MAX;
    while(p){
        int temp = p -> data;
        if(min > temp){
            min = temp;
        }
        else{
        p = p -> next;
        }
    }
    cout << min;
}

void searchh(node *p , int key){
    while( p != 0){
        if(key == p -> data){
            cout << p->data << " is the key";
        }
        p = p -> next;
    }
}

void search_better_approach(node *p , int key){
    node *q = NULL;
    
    while(p != NULL){
        if(key == p -> data){
            q -> next = p -> next;
            p -> next = first;
            first = p ;
            cout << p -> data;
        }
        q = p;
        p = p -> next;
    }
}

void insert_before_1st_node(node *p , int index , int x){
    node *t = new node;
    t -> data = x;
    t -> next = first;
    first = t;
    
    
}

void insert_after_given_position(node *p , int index , int x){
    node *t = new node;
    t -> data = x;
    p = first;
    for(int i = 0 ; i < pos -1 ; i++){
        p = p -> next;
    }
    
    t -> next = t -> next;
    p -> next = t;
    
}






int main() {
    int A[] = {1,3,6,2,7,8};
    int n = 6;
    int key = 6;
    int index = 2;
    int x = 44;
    create(A,n);
    
    print(first);
    // count(first);
    // add(first);
    // maxx(first);
    // minn(first);
    // searchh(first , key);
    // search_better_approach(first , key);
    
    insert_before_1st_node(first , index , x);
        print(first);
    
}

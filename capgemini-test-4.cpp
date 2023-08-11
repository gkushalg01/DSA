class A {
    public:
    A(int d) : data(d){}
    A() : data(0){}
    ~A(){ data = 0; }
    A(A &x){ int temp = x.data;
                this->data = x.data;
                temp = 0;
            } // deep copy
    A(A &&x): data(x.data){} // shallow copy 
    int data;
    A& operator=(A &x){int temp = x.data;
                this->data = x.data;
                temp = 0;
                }
};

int main(){
    A a;
    A b(a); // copy constructor
    A c = a; // copy constructor // deep copy
    a = b;  // operator=
    b = a;
    A a(5); // default constructor
    A b(a); // copy constructor // deep copy
    A c(10);

}
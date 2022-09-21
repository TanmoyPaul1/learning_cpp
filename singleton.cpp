// This is a Singleton, and object that can only be initialized once. 


#include <iostream>

class One {
    public:
        static void Init() {
            if(ptr ==nullptr)
                ptr = new One;
        }

        static One* Get() {
            return ptr;
        }

        void Greet() { std::cout << "Hello\n"; }
    private:
        One() {};
        inline static One* ptr{nullptr};
};

int main()
{
    One::Init();
    One::Get()->Greet();
   
    //LOG("Hello World");
}
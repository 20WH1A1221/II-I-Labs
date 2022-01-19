#include <iostream>

using namespace std;

class Exmp_A{

    private:

        int x;

        // Declaring the friend class

        friend class Exmp_B;

    public:

        // Initializing x value using a constructor

        Exmp_A() : x(9) {}

};

class Exmp_B{

    private:

        int y;

    public:

        // Initializing y value using a constructor

        Exmp_B() : y(13) {}    

    // Function to perform addition

    int sum(){

        Exmp_A a;

        return a.x + y;

    }

};

int main(){

    Exmp_B b;

    cout << "Sum is: " << b.sum();

    return 0;

}

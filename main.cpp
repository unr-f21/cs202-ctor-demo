#include <iostream>


class Cat {
public:
    // Cat() = default;
//    Cat() {
//        std::cout << "in the default constructor" << std::endl;
//    }
    Cat(const Cat& rhs){
        //age = rhs.age;
        std::cout << "in the copy constructor" << std::endl;
    }
//    Cat(int newAge = 0){
//      age = newAge;
//    }
    Cat(int newAge = 0):age(newAge){ // initialization list
    }
    void speak() {
        std::cout << "meow" << std::endl;
    }
private:
    int age;
public:
    int getAge() const {
        return age;
    }

    void setAge(int newAge) {
        age = newAge;
    }

};

int main() {
    Cat sarah(10);
    Cat tim(1234);
    Cat fred = tim;
    std::cout << fred.getAge() << std::endl;
    std::cout << tim.getAge() << std::endl;
    tim.setAge(12);
    tim.speak();
}
//NOTE: PROGRAM IS EXAMPLE FROM LECTURE SLIDES WEEK7LEC20.
#include <iostream>
using namespace std;

class Counter //the class identifier is "Counter."
{
 //member variables have accessor specifier private:
private:
 int value;

 //member functions have accessor specifier public:
public:
    int get_value () const //method 1: this is an accessor function (get) bc it is getting data from object w/o changing said object.
    { //WHY DO WE USE CONST HERE???: it hinders from changing the value or part sof the object. the object is kept constant when it runs through this function, so its attributes cannot be changed.
        return value; //only member func returning value.
    } //closes method 1.
    /*//////////////////////
     //////////////////////
     /////////////////////*/
    void count () //method 2: this is a mutator (set) bc we are changing the object through value. value becomes part of the object when called.
    {
        value = value + 1; //updates value in private section.
    } //closes method 2.
    /*//////////////////////
     //////////////////////
     /////////////////////*/
    void reset () //method 3: also a mutator (set) bc we are changing value.
    {
        value = 0;
    } //closes method 3.
};

int main ()
{
    Counter rockstar_concert; //creates object rockstar concert.
    rockstar_concert.reset(); //run reset function on object so its value of value is 0.
    cout << "At the beginning of concert: " << rockstar_concert.get_value () << endl; //prints 0.
    for (int i = 1; i <= 110; i++) //110 iterations.
    {
        rockstar_concert.count(); //calls the count function for every iteration, which adds 1 to previous value.
    }
    cout << "After awhile, the rockstar concert counter says: " << rockstar_concert.get_value () << endl; //at end we can run the get_value func bc the value will be updated each iteration.
    return 0;
}
//MUTATOR FUNC = SET FUNC: how we access member variables of object.
//ACCESSOR FUNC = GET FUNC: how we change the values of member variables of object.

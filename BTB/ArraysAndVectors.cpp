#include <iostream>
#include <vector>

using namespace std;

int main() {
//Show each way vectors can be declared, initialized, & indexed/accessed.
//Use vector and array syntax. [] vs ()
//vec 1 vec 2 .push_back 10.20 100.200 show each. declare empty vector of a vector <int>,
// add vec 1 then 2 to vec2d display again. then add 1000 to (0)(0) on v1
//once again display v2d,as well as v1.

vector <int> Vector1{};
vector <int> Vector2{};

Vector1.push_back(10);
Vector1.push_back(20);
Vector2.push_back(100);
Vector2.push_back(200);

cout << "Vector 1 Value at 0 is: " << Vector1.at(0) << ", and Vector 1 value at 1: " << Vector1.at(1) << endl;
cout << "Vector 2 Value at 0 is: " << Vector2.at(0) << ", and Vector 2 value at 1: " << Vector2.at(1) << endl;
cout << "––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––" << endl;

vector <vector<int>> Vector2D{};

Vector2D.push_back(Vector1);
Vector2D.push_back(Vector2);

cout << "A 2Dimensional Vector has been created." "\nVector 1 has been added to Vector2D with .pushback" "\nVector 2 has been added to Vector2D with .pushback" << endl;
cout << "Vector 2D is curently holding " << Vector2D.size() << " units of data" << endl;
cout << "––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––" << endl;

cout << "Vector 2D at (0) (0) is now: " << Vector2D.at(0).at(0) << endl;
cout << "Vector 2D at (0) (1) is now: " << Vector2D.at(0).at(1) << endl;
cout << "Vector 2D at (1) (0) is now: " << Vector2D.at(1).at(0) << endl;
cout << "Vector 2D at (1) (1) is now: " << Vector2D.at(1).at(1) << endl;
cout << "Based on previous examples, I hypothesize: Vector 2D at (0)(0) will be 10, (0)(1) will be 20, (1)(0) will be 100, & (1)(1) will be 200." << endl;
cout << "––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––" << endl;

Vector1.at(0) = 1000;

cout << "Vector 1 has had 1000 added to its first index address.\nVector 1 at index(0) is now: " << Vector1.at(0) << endl;
cout << "Vector 2D is naturally effected by this. Making Vector 2D at (0)(0): " << Vector2D.at(0).at(0) << endl;
cout << "Vector 2D at (0) (1) : " << Vector2D.at(0).at(1) << endl;
cout << "Vector 2D at (1) (0) : " << Vector2D.at(1).at(0) << endl;
cout << "Vector 2D at (1) (1) : " << Vector2D.at(1).at(1) << endl;
cout << "Vector 2D now holds " << Vector2D.size() << " units of data" << endl;
cout << "––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––" << endl;

}

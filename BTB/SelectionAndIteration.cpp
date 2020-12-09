/* Display Menu for access of an Integers List:
-print [x y z] <--format
-add
-mean
-smallest n largest
-quit
-else = "Invalid choice"
if empty, a scenario should display [] <-The list is empty,
or unable to calculate/ produce value because of no data.
–––Add menu items to utilize vector optimizers(ex:new/last/clear/scramble list)
–––Add random number generator to initially fill vector*/

#include<vector>
#include<iostream>

int main(){

std::vector<int> v{2,6,10,14,18,22,26,30};

std::string In;

bool stop{false};

do{
  std::cout << "\nInt List Menu Items:"<< "\nP" << "\nA" << "\nM" << "\nSnL" << "\nQ" << "\nForce Quit" << "\nR" /*Run through*/ << "\nE" /*empty?*/ << std::endl;

  std::cin >> In;

if (In == "FQ" || In == "fq" || In == "fQ" || In == "Fq" ) break;

  else if (In == "Q" || In == "q" ) {
  std::cout << "\nGoodbye." << std::endl;
  stop = true;
}

  else if (In == "R" || In == "r" ){

    {
    int s = v.at(0);
    int l = v.at(0);

    for(int i = 0; i < v.size(); i++){

      if(s > v.at(i))
        s = v.at(i);

      if(l < v.at(i))
        l = v.at(i);
      }

        std::cout << "\nThe smallest value in the container is: " << s << "\nThe largest value in the container is: " << l << std::endl;
      }

    {
    int Sum{0};

    for(int i = 0; i < v.size(); i++){

      Sum += v.at(i);

      }

    double Mean = Sum/v.size();

    std::cout << "\nThe sum if all values in the container is: " << Sum << "\nThe mean of values in the container is: " << Mean << std::endl;

    }

    {
        std::cout << "\nPrinting Container..." << std::endl;

        for(int i = 0; i < v.size(); i++){
          std::cout << "Container address: " << i << " is: " << v.at(i) << std::endl;
        }
    }

    {
      std::cout << std::boolalpha << "\nThe container is empty: "<< v.empty() << std::endl;
    }

    continue;
    }

  else if (In == "SNL" || In == "snl" || In == "Snl" || In == "snL" || In == "sNl" ) {
    int s = v.at(0);
    int l = v.at(0);

    for(int i = 0; i < v.size(); i++){

      if(s > v.at(i))
        s = v.at(i);

      if(l < v.at(i))
        l = v.at(i);

}

    std::cout << "\nThe smallest value in the container is: " << s << "\nThe largest value in the container is: " << l << std::endl;

}

  else if (In == "M" || In == "m" ) {

    int Sum{0};

    for(int i = 0; i < v.size(); i++){

      Sum += v.at(i);

}

  double Mean = Sum/v.size();

  std::cout << "\nThe mean of values in the container is: " << Mean << std::endl;

}

  else if (In == "A" || In == "a" ) {

    int NewVal{};

    std::cout << "\nEnter new value: " << std::endl;
    std::cin >> NewVal;

    v.emplace_back(NewVal);

}

  else if (In == "P" || In == "p" ) {

    std::cout << "\nPrinting Container..." << std::endl;

    for(int i = 0; i < v.size(); i++){
      std::cout << "Container address: " << i << " is: " << v.at(i) << std::endl;

}

}

  else if (In == "E" || In == "e"){


    std::cout << std::boolalpha << "The container is empty: " << v.empty() << std::noboolalpha << std::endl;
  }

  else std::cout << "Unknown selection please try again.";


}while(stop == false);

return 0;

}

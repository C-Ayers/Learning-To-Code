#include<iostream>
#include<cstring>

int main(){

char string1[110]{};
char string2[50]{};
char new_string1[110];
char new_string2[50];

int quit {0};

do{

  char str_choice{0};

  std::cout<<"Which String would you like to access?"<<"\n1.S110"<<"\n2.S50"<<std::endl;

  std::cin>>str_choice;

  if(str_choice== '1')
    {

  std::cout<< "Enter The Val before the "." Of The Option You Preffer." <<"Q.quit""\n0.Quit"<<"\n1.Assign"<<"\n2.Remove"<<"\n2.Length"<<"\n3.#Of Shared Ch's"<<"\n4."





  std::cout<<"Enter String1" << std::endl;
  std::cin>> new_string1;

  std::cout<<"Enter String2"<< std::endl;
  std::cin>> new_string2;



  Len1 = std::strlen(string1);
  Len2 = std::strlen(string2);



  std::cout<<"String1 Length"<<Len1<<std::endl<<"String2 Length"<<Len2<<std::endl;

  std::strcpy(string1, string2);
    }
  else if(str_choice == '2'){
    //copy paste, command click, str1=str2







    }
  else if(str_choice=='q'||str_choice=='Q')
  quit = 1;

  else std::cout<<"Please Select 1 or 2.";

}while(quit == 0);


}

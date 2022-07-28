#include <iostream>

class Employee {
 private:
  std::string Name;
  std::string Company;
  int Age;

 public:
  void setName(std::string name) {
   Name = name;
  }
  std::string getName() {
   return Name;
  }

  void setCompany(std::string company) {
   Company = company;
  }
  std::string getCompany() {
   return Company;
  }

  void setAge(int age) {
   if(age>=18)
   Age = age;
  }
  int getAge() {
   return Age;
  }


  void IntroduceYourself() {
   std::cout <<  "Name - " << Name << std::endl;
   std::cout <<  "Company - " << Company << std::endl; std::cout <<  "Age - " << Age << std::endl;

  }
  Employee(std::string name, std::string company, int age) {
   Name = name;
   Company = company;
   Age = age;

  }


};

int main () {
 Employee employee1 = Employee("Saldina", "YT-CodeBeauty", 25);

 employee1.IntroduceYourself();

 Employee employee2 = Employee("John", "Amazon", 35);
 employee2.IntroduceYourself();

 employee1.setAge(15);

 std::cout << employee1.getName() << " is " << employee1.getAge() << " years old." << std::endl;


}

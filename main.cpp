#include <iostream>
#include <vector>
#include <pre/file/string.hpp>
#include <nlohmann/json.hpp>


int main(){
  std::string content = pre::file::to_string("/Users/luclambour/workspace/lambourl/Bocal_example_json_parse/apple.json");
  std::cout << content << std::endl;

  nlohmann::json data =  nlohmann::json::parse(content);
  std::cout<< data["fruit"] <<std::endl;

  std::vector<std::string> vitam = data["vitam"] ;

  for (auto v : vitam){
     std::cout<< v <<std::endl;
  }
  return 0;
}
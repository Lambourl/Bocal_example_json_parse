#include <iostream>
#include <vector>
#include <pre/file/string.hpp>
#include <nlohmann/json.hpp>
#include <pre/json/from_json.hpp>
#include <pre/json/to_json.hpp>


struct fruit_t {
  std::string fruit; 
  std::string size; 
  std::string color; 
  std::vector<std::string> vitam; 
};

BOOST_FUSION_ADAPT_STRUCT(fruit_t, fruit, size, color, vitam);


int main(){
  std::string content = pre::file::to_string("/Users/luclambour/workspace/lambourl/Bocal_example_json_parse/apple.json");

  fruit_t apple = pre::json::from_json<fruit_t>(content);

  std::cout<<apple.fruit<<std::endl;
  std::cout<<apple.size<<std::endl;

  return 0;
}
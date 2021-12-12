#include "common/object.hpp"
#include "common/utils.hpp"

common::Object getObject() { return {"prvalue"}; }

int main() {
  // Construct object
  common::Object object1("object");
  // Construct another from lvalue
  common::Object object2(object1);
  // Construct another from prvalue (optimized by RVO)
  common::Object object3(getObject());
  // Construct another from xvalue
  common::Object object4(std::move(object1));

  common::print("object1 - ", object1);
  common::print("object2 - ", object2);
  common::print("object3 - ", object3);
  common::print("object4 - ", object4);
}
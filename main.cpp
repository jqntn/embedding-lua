#include <cstdlib>
#include <sol/sol.hpp>

int
main()
{
  sol::state lua;

  lua.open_libraries(sol::lib::base);
  lua.script(R"(print("Hello World"))");

  return EXIT_SUCCESS;
}
#include <iostream>

#if __has_include(<filesystem>)
  #include <filesystem>
  namespace fs = std::filesystem;
#else
  #include <boost/filesystem.hpp>
  namespace fs = boost::filesystem;
#endif

int main()
{
  std::cout << "Current path is " << fs::current_path() << '\n';

  for(auto& p: fs::directory_iterator("C:/Apps32/MSys2/var/cache/pacman/pkg"))
    std::cout << fs::path(p).filename() << '\n';

}

#include <boost/mpi/environment.hpp>
#include <boost/mpi/communicator.hpp>
#include <iostream>
namespace mpi = boost::mpi;

int main(int argc, char* argv[])
{
  mpi::environment env(argc, argv);
  mpi::communicator world;
  
  while(true)
  {
	 std::cout << "I am process " << world.rank() << " of " << world.size() << "." << std::endl;
     
     boost::this_thread::sleep_for(boost::chrono::milliseconds(1000));
  }
  
  return 0;
}
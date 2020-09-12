#include <iostream>
#include <ctime>
#include <ratio>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::chrono;


int main ()
{
  high_resolution_clock::time_point t1 = high_resolution_clock::now();
  std::this_thread::sleep_for(std::chrono::seconds(1));
  high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> elapsed = duration_cast<duration<double>>(t2 - t1);

  cout << "It took " << elapsed.count() << " seconds.";
  cout << endl;

  return 0;
}

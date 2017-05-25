#include <iostream>
void Convert(long long x);

int main()
{
  using namespace std;
  long long seconds;
  cout << "Enter the number of seconds: ";
  cin >> seconds;
  cout << seconds << " seconds = ";
  Convert(seconds);
}

void Convert(long long x)
{
  using namespace std;
  const int HoursinDay = 24;
  const int MinutesinHour = 60;
  const int SecondsinMinute = 60;

  int Seconds = x % SecondsinMinute;
  
  int Minutes = x  / (SecondsinMinute);
  Minutes = Minutes % (MinutesinHour);

  int Hour = x / (MinutesinHour * SecondsinMinute);
  Hour = Hour % HoursinDay;

  int Days = x / (HoursinDay * MinutesinHour * SecondsinMinute);
  cout << Days << " Days," << Hour << " hours," << Minutes << " minutes," << Seconds << " seconds" << endl;
}

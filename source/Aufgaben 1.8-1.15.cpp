#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);

  int x, y, z;
  cout << "Zahl1: \n";
  cin >> x;
  cout << "Zahl2:\n";
  cin >> y;
  int gcd(int x, int y);
  cout << gcd(x,y) << endl;

  cout << "Quersumme: \n"
            << "Zahl: \n";  
  cin >> z;
  int checksum(int z);
  cout <<checksum(z) << endl;

            << "SumMult: \n";
  int multi = 1000;
  int sumMultiples(int multi);
  cout << sumMultiples(multi) << endl
    	    << "fract: \n";
  float d;
  cin >> d;
  float fract(float d);
  cout << fract(d) << endl;
  
  float c,f;
  cout << "Zylinder: \n"
            << "hoehe: \n";
  cin >> c;
  cout << "radius: \n";
  cin >> f;
  float Z_surface(float f, float c);
  cout << "oberfläche: " << Z_surface(f,c) << endl;
  float Z_volume(float f, float c);
  cout << "volumen: " << Z_volume(f,c) << endl;
  int a;

  cout  << "factorial: \n";
  cin >> a;
  int factorial(int a);
  cout << factorial(a) << endl;

  cout    << "Binomial: \n";
  int j, o;
  cout << "j: \n";
  cin >> j;
  cout << "o: \n";
  cin >> o;
  int binomial(int j, int o);
  std::cout << binomial(j,o) << endl;
  int prim;

  cout << "Test-Primzahl: \n";
  cin >> primz;
  bool is_prime(int primz);
  cout << is_prime(primz) << endl;
  

}

  int gcd(int x, int y){
    if (x==0)
    {
        return b;
    }
    while (y!=0)
    {
        if (x>y)
        {
            x = x - y;
        }
        else
        {
            y = y -x;    
        }
    }
    return a;
  }

  TEST_CASE("describe_gcd", "[gcd]")
  {
      REQUIRE(gcd(2,4) == 2);
      REQUIRE(gcd(0,6) == 6);
      REQUIRE(gcd(3,7) == 1);
  }

  int checksum(int z){
  
    int sum = 0;
    while (0!=z){
    
        sum = sum + (z % 10);
        z = z / 10;
    }
    return sum;
  }

  TEST_CASE("describe_checksum", "[checksum]")
  {
      REQUIRE(checksum(117063) == 18);
      REQUIRE(checksum(14) == 5);
      REQUIRE(checksum(0) == 0);
  }

  int sumMult()
  {
      int sum = 0;
      for(int n = 0; n <= 1000; n++)
      {
          if(n % 3 == 0 || n % 5 == 0)
          {
              sum = sum +n;
          }
      }
      return sum;
  }

  float fract(float d)
  {
      int cast = d;
      float float_erg = d - cast;
      return float_erg;
  }
 
  TEST_CASE("describe_fract", "[fract]")
  {
      REQUIRE(fract(5.123456789) = Approx(0.123456789));
  }

  float Z_surface(float r, float h){
  
      float surface = 2 * M_PI * r * (r + h);
      return surface;
  }

  float Z_volume(float r, float h){
  
      float volume = M_PI * (r*r) * h;
      return volume;
  }

  TEST_CASE("describe_Z_surface", "[Z_surface]")
  {
      REQUIRE(Z_surface(2,3) == 62.8319);
      REQUIRE(Z_surface(2,0) == 0);
  }

  TEST_CASE("describe_Z_volume", "[Z_volume]")
  {
      REQUIRE(Z_volume(3,4) == 113.097);
      REQUIRE(Z_volume(2,0) == 0);
  }

  int factorial(int a)
  {
    int sum = 1;
    for (int a = 1; a <= a && a > 0; a++)
    {
        sum = sum * a;    
    }    
    return sum;
  }  

  TEST_CASE("describe_factorial", "[factorial]")
  {
      REQUIRE(factorial(5) == 120);
      REQUIRE(factorial(0) == 0);
      REQUIRE(factorial(1) == 1);
  }

  int binomial(int j, int o)
  {
    
    int a_1 = factorial(j);
    int a_2 = factorial(o);
    int a_3 = factorial(j-o);
    return (a_1 / (a_2 * a_3));
  }

  TEST_CASE("describe_binomial", "[binomial]")
  {
      REQUIRE(binomial(2,3) == 0);
      REQUIRE(binomial(4,3) == 3);
      REQUIRE(binomial(10,3) == 120);
  }

  bool is_prime(int primz)
  {  
    bool test = true;
    int i = 2;
    if (primz == 0 || primz == 1)
    {
        test = false;    
    } else 
        {
        while (i<primz)
        {
            if (primz % i == 0)
            { 
                test = false;
                break;
            }
            else i++;
        } 
    } 
    
    return test;
  }

TEST_CASE("describe_is_prime", "[is_prime]")
  {
      REQUIRE(is_prime(2) == 1);
      REQUIRE(is_prime(0) == 0);
      REQUIRE(is_prime(1783) == 1);
      REQUIRE(is_prime(117063) == 0);
  }

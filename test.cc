#include "CppUTest/CommandLineTestRunner.h"
#include "fizzbuzz.h"

TEST_GROUP(FizzBuzzTest) {};

TEST(FizzBuzzTest, 1ShouldReturn1)
{
  CHECK_EQUAL("1", fizzbuzz(1));
}

TEST(FizzBuzzTest, 2ShouldReturn2)
{
  CHECK_EQUAL("2", fizzbuzz(2));
}

TEST(FizzBuzzTest, 3ShouldReturnFizz)
{
  CHECK_EQUAL("Fizz", fizzbuzz(3));
}

TEST(FizzBuzzTest, 5ShouldReturnBuzz)
{
  CHECK_EQUAL("Buzz", fizzbuzz(5));
}

TEST(FizzBuzzTest, 15ShouldReturnFizzBuzz)
{
  CHECK_EQUAL("FizzBuzz", fizzbuzz(15));
}

int main(int argc, char *argv[])
{
  return RUN_ALL_TESTS(argc, argv);
}


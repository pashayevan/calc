#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "calc.h"

TEST_SUITE_BEGIN("math");
    TEST_CASE("Testing addition") {
        REQUIRE(add(1,1)==2);
        CHECK(add(-1,1)==0);
        CHECK(add(-1,-1)==-2);
        /*CHECK_THROWS(add("abc"));
        CHECK_THROWS_AS(add(6,9)==34, std::exception);
        CHECK_THROWS_WITH(add(6,8)==5, "Wrong arguments");
        CHECK_THROWS_WITH_AS(add(5,2)==78, "Wrong", std::runtime_error);
        CHECK_THROWS_WITH(add(6,4)==5, doctest::Contains("Wrong"));*/
    }
    TEST_CASE("Testing substraction") {
        WARN(sub(2,1)==1);
        CHECK(sub(2,2)==0);
        CHECK(sub(2,3)==-1);
    }
    TEST_CASE("Testing floating") {
        REQUIRE(div(22.0f,7.0f)==doctest::Approx(3.141).epsilon(0.01));
    }
TEST_SUITE_END();
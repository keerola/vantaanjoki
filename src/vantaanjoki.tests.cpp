#include "countries.h"
#include "book.h"
#include "order.h"
#include "inventory.h"
#include <cassert>
#include <assert.h>
#include <iostream>

static void example()
{
	
    countries* Test = new countries("moro", 2.0, 2.0);
	
    assert(Test->getCountry() == "Sweden");
}

typedef void test();

static test * tests[] =
{
    example,
};

int main()
{
    size_t at;
    for (at = 0; at != sizeof tests / sizeof tests[0]; at++)
    {
        tests[at]();
        std::cout << '.';
    }
    std::cout << std::endl << at << " tests passed" << std::endl;
    return 0;
}

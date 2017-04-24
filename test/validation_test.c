#include "deposit.h"
#include "ctest.h"

CTEST(InputValidation, BordersDatLeft)
{
    const int result = getinput(0, 0);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(InputValidation, BordersDatRight)
{
    const int result = getinput(365, 0);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(InputValidation, DatlessNull)
{
    const int result = getinput(-10, 0);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(InputValidation, AmountLessNull)
{
    const int result = getinput(5, -100);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(InputValidation, DatandAmountRange)
{
    const int result = getinput(30, 1000);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

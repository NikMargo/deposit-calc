#include "deposit.h"
#include "ctest.h"

CTEST(AmountBordersDat,TestBord1)
{
    const int result = raschet(30, 2000);
    const int expected = 1800;
    ASSERT_EQUAL(expected, result);
}

CTEST(AmountBordersDat,TestBord2)
{
    const int result = raschet(120, 2000);
    const int expected = 1040;
    ASSERT_EQUAL(expected, result);
}

CTEST(AmountBordersDat,TestBord3)
{
    const int result = raschet(240, 1000);
    const int expected = 2120;
    ASSERT_EQUAL(expected, result);
}

CTEST(AmountBordersDat,TestBord4)
{
    const int result = raschet(365, 2000);
    const int expected = 2240;
    ASSERT_EQUAL(expected, result);
}

CTEST(AmountSubtotals,TestSub1)
{
    const int result = raschet(60, 12000);
    const int expected = 12240;
    ASSERT_EQUAL(expected, result);
}

CTEST(AmountSubtotals,TestSub2)
{
    const int result = raschet(130, 100000);
    const int expected = 106000;
    ASSERT_EQUAL(expected, result);
}

CTEST(AmountSubtotals,TestSub3)
{
    const int result = raschet(250, 100000);
    const int expected = 112000;
    ASSERT_EQUAL(expected, result);
}


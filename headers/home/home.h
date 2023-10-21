#ifdef __cplusplus
extern "C"
{
#endif

#ifndef HOME_H
#define HOME_H

#include "main_header.h"

#ifdef TEST
#include "gtest/gtest.h"
#include "gmock/gmock.h"

/*  Mock of Home object */
class MockHome
{
     public:
        MockHome() {}
	MOCK_METHOD(void, feel_good, ());
	MOCK_METHOD(void, feel_tired, ());
};
#endif // TEST

/* declaration of functions of home state */
void feel_good();
void feel_tired();

#endif // HOME_H
#ifdef __cplusplus
}
#endif


#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "main_header.h"
#include "home.h"

/* current, next states as define in main.cpp */
extern functional_state current, next;

/* test fixture to be used for google test */

using testing::Mock;

/* pointer to mock object */
MockHome *mockHome;

class HomeFixture : public testing::Test
{
      protected:
	void SetUp() override {
	     mockHome = new MockHome();
	}
	void TearDown() override {
	     Mock::VerifyAndClearExpectations(&mockHome);
	}

};

/* definition of home transition functions */
void feel_good() {
	mockHome->feel_good();
}
void feel_tired() {
	mockHome->feel_tired();
}

/* test initialization of current, next states */
TEST_F(HomeFixture, HomeInitTest)
{
	EXPECT_EQ(HOME,current.state);
}

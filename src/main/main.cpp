#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "main_header.h"
#include "home.h"

functional_state current = { 
                            .state = HOME, 
                            .function = &feel_good };
functional_state next = {
                            .state = HOME,
                            .function = &feel_good };




#include "callback_list.h"
#include "log.h"
#include <gtest/gtest.h>

using namespace mavsdk;

TEST(CallbackList, SubscribeCallUnsubscribe)
{
    unsigned first_called = 0;
    unsigned second_called = 0;

    CallbackList<int, double> cl;
    auto first_handle = cl.subscribe([&](int i, double d) {
        ++first_called;
        EXPECT_GE(i, 42);
        EXPECT_LE(i, 44);
        EXPECT_GT(d, 77.0);
        EXPECT_LT(d, 112.0);
    });

    auto second_handle = cl.subscribe([&](int i, double d) {
        ++second_called;
        EXPECT_GE(i, 42);
        EXPECT_LE(i, 44);
        EXPECT_GT(d, 77.0);
        EXPECT_LT(d, 112.0);
    });

    // Call both a first time.
    cl(42, 77.7);
    EXPECT_EQ(first_called, 1);
    EXPECT_EQ(second_called, 1);

    // Call both a second time.
    cl(43, 88.8);
    EXPECT_EQ(first_called, 2);
    EXPECT_EQ(second_called, 2);

    // Now we unsubscribe the first one.
    cl.unsubscribe(first_handle);

    cl(43, 99.9);
    EXPECT_EQ(first_called, 2);
    EXPECT_EQ(second_called, 3);

    // Unsubscribing the first once should be ignored.
    cl.unsubscribe(first_handle);

    // Now we unsubscribe the second one as well, no more calling.
    cl.unsubscribe(second_handle);

    cl(44, 111.1);
    EXPECT_EQ(first_called, 2);
    EXPECT_EQ(second_called, 3);
}

TEST(CallbackList, UnsubscribeFromCallback)
{
    unsigned called = 0;

    CallbackList<> cl;
    Handle<> handle = cl.subscribe([&]() {
        cl.unsubscribe(handle);
        ++called;
    });

    // We call it twice but only expect it to be called once.
    cl();
    cl();
    EXPECT_EQ(called, 1);
}

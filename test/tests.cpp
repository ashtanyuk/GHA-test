// Copyright 2020 GHA Test Team
#include <github_actions_gtest_example/github_actions_gtest_example.h>

#include <gtest/gtest.h>

TEST(githubActionsGtestExampleTest, firstTest)
{
  EXPECT_EQ(1,1);
}

TEST(githubActionsGtestExampleTest, addTest)
{
  const int a = 1;
  const int b = 3;
  const int result = add(a, b);
  EXPECT_EQ(result, a + b);
}

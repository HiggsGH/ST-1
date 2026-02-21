// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

// checkPrime тесты

TEST(st1, checkPrime_1) {
  EXPECT_FALSE(checkPrime(0));
}

TEST(st1, checkPrime_2) {
  EXPECT_FALSE(checkPrime(1));
}

TEST(st1, checkPrime_3) {
  EXPECT_TRUE(checkPrime(2));
}

TEST(st1, checkPrime_4) {
  EXPECT_TRUE(checkPrime(3));
}

TEST(st1, checkPrime_5) {
  EXPECT_FALSE(checkPrime(4));
}

TEST(st1, checkPrime_6) {
  EXPECT_TRUE(checkPrime(41));
}

// nPrime тесты

TEST(st1, nPrime_1) {
  EXPECT_EQ(nPrime(0), 0);
}

TEST(st1, nPrime_2) {
  EXPECT_EQ(nPrime(1), 2);
}

TEST(st1, nPrime_3) {
  EXPECT_EQ(nPrime(2), 3);
}

TEST(st1, nPrime_4) {
  EXPECT_EQ(nPrime(40), 173);
}

// nextPrime тесты

TEST(st1, nextPrime_1) {
  EXPECT_EQ(nextPrime(0), 2);
}

TEST(st1, nextPrime_2) {
  EXPECT_EQ(nextPrime(1), 2);
}

TEST(st1, nextPrime_3) {
  EXPECT_EQ(nextPrime(2), 3);
}

TEST(st1, nextPrime_4) {
  EXPECT_EQ(nextPrime(11), 13);
}

TEST(st1, nextPrime_5) {
  EXPECT_EQ(nextPrime(1016), 1019);
}

// sumPrime тесты

TEST(st1, sumPrime_1) {
  EXPECT_EQ(sumPrime(0), 0);
}

TEST(st1, sumPrime_2) {
  EXPECT_EQ(sumPrime(1), 0);
}

TEST(st1, sumPrime_3) {
  EXPECT_EQ(sumPrime(2), 0);
}
TEST(st1, sumPrime_4) {
  EXPECT_EQ(sumPrime(3), 2);
}
TEST(st1, sumPrime_5) {
  EXPECT_EQ(sumPrime(40), 197);
}
TEST(st1, sumPrime_6) {
  EXPECT_EQ(sumPrime(100), 1060);
}

#include "grid.hpp"

#include <gtest/gtest.h>

struct TestEmptyGrid : public ::testing::Test
{
    SudokuSolver::Grid m_grid;
};

TEST_F(TestEmptyGrid, AllValuesAreEmpty)
{
    for(std::size_t y = 0; y < m_grid.m_size; y++)
    {
        for(std::size_t x = 0; x < m_grid.m_size; x++)
        {
            EXPECT_EQ(0, m_grid(x, y));
        }
    }
}

TEST_F(TestEmptyGrid, TestPrinting)
{
    std::ostringstream oss;
    oss << m_grid;
    EXPECT_EQ("+---+---+---+\n"
              "|...|...|...|\n"
              "|...|...|...|\n"
              "|...|...|...|\n"
              "+---+---+---+\n"
              "|...|...|...|\n"
              "|...|...|...|\n"
              "|...|...|...|\n"
              "+---+---+---+\n"
              "|...|...|...|\n"
              "|...|...|...|\n"
              "|...|...|...|\n"
              "+---+---+---+",
              oss.str());
}

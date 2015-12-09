#include "grid.hpp"

#include <iostream>

#include <GSL/gsl_assert.h>

namespace SudokuSolver
{

    Grid::Grid()
        : m_values(m_size * m_size, 0)
    {
    }

    uint8_t Grid::operator()(const std::size_t x, const std::size_t y) const
    {
        Expects(x < m_size);
        Expects(y < m_size);
        const auto res = m_values[ y * m_size + x ];
        Ensures(res < 10);
        return res;
    }

    std::ostream& operator<<(std::ostream& out, const Grid& grid)
    {
        for(std::size_t y = 0; y < grid.m_size; y++)
        {
            if(y % 3 == 0) out << "+---+---+---+\n";
            for(std::size_t x = 0; x < grid.m_size; x++)
            {
                if(x % 3 == 0) out << "|";
                const auto value = grid(x, y);
                if(value == 0)
                    out << ".";
                else
                    out << ('0' + value);
            }
            out << "|\n";
        }
        out << "+---+---+---+";
        return out;
    }

} // SudokuSolver

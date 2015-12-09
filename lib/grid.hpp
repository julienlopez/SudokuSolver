#pragma once

#include <cstdint>
#include <iosfwd>
#include <vector>

namespace SudokuSolver
{

    class Grid
    {
    public:
        Grid();
        ~Grid() = default;

        /**
         * @pre x < m_size && y < m_size
         * @post 0 <= result < 10
         */
        uint8_t operator()(const std::size_t x, const std::size_t y) const;

        friend std::ostream& operator<<(std::ostream& out, const Grid& grid);

        const std::size_t m_size = 9;

    private:
        std::vector<uint8_t> m_values;
    };

} // SudokuSolver

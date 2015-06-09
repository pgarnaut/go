#pragma once

// 
// NOTE: board coordinates are always in Col,Row format, and 1-based by default.
// Coords can be supplied as either "3,7" or "C,7". The board is always square, defaults to 9x9.
// 
// NOTE: in general 0 = empty, 1 = black piece, 2 = white piece

#include "types.h"
#include <vector>


class Board
{
public:
	
	Board() {
		Board(9);
	}
	Board(int size);
	virtual ~Board();

	// deletes current board state
	int setSize(int n);

	// spits back a plain old int array, that way you can do "board[col][row]"
	const uint8 *operator[](std::size_t idx);

	// spits back piece directly
	uint8 get(uint32 row, uint32 col);

	// put piece at row/col (1-based by default) coordinates
	int put(uint32 row, uint32 col, uint8 piece);

private:
	std::vector<uint8> m_board;
	int m_size;
	bool m_oneBased = true;
};


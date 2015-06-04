#pragma once

// 
// NOTE: board coordinates are always in Col,Row format, and 1-based by default.
// Coords can be supplied as either "3,7" or "C,7". The board is always square, defaults to 9x9.
//


#include <vector>
#include <stdint.h>

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
	const uint8_t *operator[](std::size_t idx);

private:
	std::vector<uint8_t> m_board;
	int m_size;
	bool m_oneBased = true;
};


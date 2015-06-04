#include "Board.h"


Board::Board(int size) {
	m_board.reserve(size * size);
}


Board::~Board() {
}

int Board::setSize(int n) {
	m_board.resize(n);
	m_board.assign(n, 0);

	return 0;
}

const uint8_t *Board::operator[](std::size_t rowIdx) {
	return &m_board[0] + (m_oneBased? rowIdx+1 : rowIdx) * m_size;
}
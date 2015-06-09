#pragma once
class GTP
{
public:
	GTP();
	virtual ~GTP();

	void parseCommand();
	void run();
	//bool setFile();

private:
	// m_file;
	// m_p1; // human or engine
	// m_p2; // human or engine
	// ...

	int m_inFile;
};


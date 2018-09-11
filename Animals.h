#ifndef Animals_H
#define Animals_H

class Animals
{
private:
	int O_b_j = 1;

public:
	Animals ();
	void Create_Animals ();
	Animals(const Animals &) = delete;
	Animals & operator=(const Animals &) = delete;
	void* operator new(size_t) = delete;
	void* operator new[](size_t) = delete;
	void operator delete(void*) = delete;
	void operator delete[](void*) = delete;
	~ Animals ();
};

#endif Animals _H

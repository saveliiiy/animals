#ifndef Mouse_H
#define Mouse_H

class Mouse {
	char breed[20];
	char color[20];
	char name[20];
	char pol[20];
	char date_of_birth[20];
	char dimensions[20];
	char owner_name[20];
	char nursery_name[20];
	char character[20];

public:
	Mouse();

	void Vivod_in_not_fail();
	void Vivod_in_fail();
	~Mouse();
};

#endif Mouse_H

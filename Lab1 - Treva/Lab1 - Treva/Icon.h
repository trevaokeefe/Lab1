#pragma once

ref class icon
{
public:
	void set_x(int new_x);
	void set_y(int new_y);

	int get_x();
	int get_y();

private:
	int x = 0;
	int y = 0;
};
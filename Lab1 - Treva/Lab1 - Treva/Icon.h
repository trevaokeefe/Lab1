class Icon
{
public:
	void input();
	void output();
	void set(int new_x, int new_y);

	int get_x();

	int get_y();

private:
	void check_position();
	int x;
	int y;
};
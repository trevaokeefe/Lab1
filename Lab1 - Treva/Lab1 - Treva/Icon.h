ref class Icon
{
public:
	void set(int new_x, int new_y);

	int get_x();
	int get_y();

private:
	int x = 0;
	int y = 0;
};
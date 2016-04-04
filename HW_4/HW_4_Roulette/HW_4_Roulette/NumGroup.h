
class NumGroup {
	public:
		NumGroup();
		NumGroup(int num_arr[]);

		bool contains(int num);
	
	private:
		int num_size;
		int nums[];
	};
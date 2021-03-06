#ifndef _RANGE_H__
#define _RANGE_H__

struct RangeNode {
	int data;
	int setAside; // 1 if true, 0 if false
	int setAsideLabel;
	RangeNode * next;
};

class Range {
	public:
		Range();
		Range(const unsigned int size);
		~Range();

		int * createArray(int& size);
		void freeArray(int * array);
		void setAside(const int nums_to_remove [], const int length, const int label);
		void replace(const int label);

	private:
		RangeNode * head;
		int count;
};

#endif

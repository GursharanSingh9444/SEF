#include<stdio.h>

class Classifier
{
private:

	int data;

public: 

	int getData()
	{
		return data;
	}

	void setData(int Data)
	{
		data = Data;
	}

	void train()
	{
		printf("train\n");
		printf("The first feature is added\n");
	}

	void predict()
	{
		printf("predict\n");
	}

};
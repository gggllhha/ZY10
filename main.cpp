#include<stdio.h>
#include<stdlib.h>
void outputResult(int* r, int len) {
	printf("½á¹û:");
	for (int i = 0; i < len; i++)
	{
		printf("%d", r[i]);
	}
	printf("\n");
}
//Ã°ÅÝÅÅÐò
void sortBox(int* box, int n) {
	for (int i = n - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++) {

			if (box[j] > box[j + 1]) {
				int temp = box[j];
				box[j] = box[j + 1];
				box[j + 1] = temp;
			}
		}
	}
}

void loading(int* box, int* r, int w, int n) {

	r[0] = 1;
	w -= box[0];
	for (int i = 1; i < n; i++)
	{
		if (w - box[i] >= 0) {
			w -= box[i];
			r[i] = 1;
		}
	}

}
int main()
{
	int w = 100;
	int box[6] = { 100,20,25,25,20,20 };
	sortBox(box, 6);
	int result[6] = { 0 };
	loading(box, result, w, 6);
	outputResult(result, 6);
	getchar();
	return 0;
}

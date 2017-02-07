#include <opencv/cv.h> 
#include <opencv/highgui.h> 
#include <opencv/ml.h> 

using namespace cv;
#define MAX_NUM_IMAGES 60000 

typedef unsigned char BYTE;

class DigitRecognizer {
public:
	DigitRecognizer();
	~DigitRecognizer();
	bool train(char* trainPath, char* labelsPath);
	int classify(Mat img);
private:
	Mat preprocessImage(Mat img);
	int readFlippedInteger(FILE *fp);
private:
	KNearest    *knn;
	int numRows, numCols, numImages;
};
// Include Libraries
#include<opencv2/opencv.hpp>
#include<iostream>

// Namespace to nullify use of cv::function(); syntax
using namespace std;
using namespace cv;

int main()
{
	// initialize a video capture object
	VideoCapture vid_capture("/home/manavi/Desktop/ass 2/que1/big_buck_bunny_480p_surround-fix.avi");

	// Print error message if the stream is invalid
	if (!vid_capture.isOpened())
	{
		cout << "Error opening video stream or file" << endl;
	}

	int count = 0;
	// Read the frames to the last frame
	while (vid_capture.isOpened() && count<100)
	{
		// Initialise frame matrix
		Mat frame;

	    // Initialize a boolean to check if frames are there or not
		bool isSuccess = vid_capture.read(frame);
		count++;
		// If frames are present, show it
		if(isSuccess == true)
		{
			//display frames
			imshow("Frame", frame);
			imwrite("/home/manavi/Desktop/612 ass 2/ass1img.jpg",frame);
		}

		// If frames are not there, close it
		if (isSuccess == false)
		{
			cout << "Video camera is disconnected" << endl;
			break;
		}
		
		//wait 20 ms between successive frames and break the loop if key q is pressed
		int key = waitKey(10);
		if (key == 'q')
		{
			cout << "q key is pressed by the user. Stopping the video" << endl;
			break;
		}


	}
	// Release the video capture object
	vid_capture.release();
	destroyAllWindows();
	return 0;
}

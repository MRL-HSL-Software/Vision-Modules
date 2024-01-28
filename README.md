# Vision-Modules
Collection of Vision Tools and Related Stuff to Handle Vision Part of the Robot
## Current Vision Modules
* Convex Hull
  * [ ] on Image
  * [ ] on Points
* Image Processing
  * [ ] Gaussian Blur and Kernels
  * [ ] Bit Plane and Binary Image
  * [ ] Canny Edge Detection
  * [ ] Grayscale
  * [ ] Treshold
  * [ ] Sobel
* Detection Model Handler
  * [ ] Detection Model
  * [ ] Logger
  * [ ] Tools
## Overview
### Convex Hull
Implement Convex Hull Graham's Scan and Gift Wrapping Algorithms on 2D Points and Images, 2D Point has only X-Axis, Y-Axis and Theta (Between 2 Points) Values, on Image You Must Implement Convex Hull Algorithms on Segmented Images that are Stored in [Assets Directory](Assets)

You May Need Fast Sort Algorithm for Image Size of 320 x 240, So Test These Sort Methods for Your Convex Hull Implementation :
* Insertion Sort
* Selection Sort
* Bubble Sort
* Merge Sort
* Quick Sort

Convex Hull Sample on Random Generated 2D Points :
<p align="center">
  <img width="500" height="500" src="Assets/convexhull-on-points.png" alt="by Ramtin Kosari" align="10%">
</p>

Sample of Segmented Images :
<p align="center">
  <img width="45%" height="45%" src="Assets/filerJZEkB.png" alt="by Ramtin Kosari" align="left">
  <img width="45%" height="45%" src="Assets/filerJZEkB_labeld.png" alt="by Ramtin Kosari" align="right">
</p>

### Image Processing
Implement Image Processing Filters on [This](Assets/juniors.png) Image
Sample Filtered Image :
<p align="center">
  <img width="400" height="500" src="Assets/picture.png" alt="by Ramtin Kosari" align="10%">
</p>

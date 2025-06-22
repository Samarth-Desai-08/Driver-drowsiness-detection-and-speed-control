# Driver-drowsiness-detection-and-speed-control
Driver drowsiness detection is a project built using Dlib and OpenCV with Python as a backend language.

#Logic of project
The project includes direct working with the 68 facial landmark detector and also the face detector of the Dlib library. The 68 facial landmark detector is a robustly trained efficient detector which detects the points on the human face using which we determine whether the eyes are open or they are closed.

![landmarks](https://github.com/user-attachments/assets/94865060-6c8e-4e58-b23e-9bbec862ade9)
#The working of the project
As you can see the above screenshot where the landmarks aredetected using the detector.
Now we are taking the ratio which is described as 'Sum of distances of vertical landmarks divided by twice the distance between horizontal landmarks'.
Now this ratio is totally dependent on your system which you may configure accordingly for the thresholds of sleeping, drowsy, active.

![active](https://github.com/user-attachments/assets/5913e33e-5016-4479-8aae-95d35d951b00)
![drowsy](https://github.com/user-attachments/assets/d10c71dc-cd1e-4590-9256-2ac4a6069f3f)
![sleepy](https://github.com/user-attachments/assets/1197804e-7620-41a8-9696-3d9571719ec1)

# opencv-ffmpeg

FMPEG is an open source software used to deal with video, audio as well 
as picture editing. The command line consists of ‘ffmpeg’ which in case is 
the command for using the tool. Transforming a video to images or vice versa 
can be done by ffmpeg tool, to convert one video format to another format, 
to convert video file to audio file, to create a slideshow video from multiple 
images. Trimming and concatenation of a video can be done by the use of it.
‘ffplay’ is a simple media player and ‘ffprobe’ is a command line tool. 
FFMPEG libraries are the main part of the products such as ‘VLC’ and are 
also part of ‘Youtube’.

The command that we used to get the 100th frame from the Big Buck Bunny
video is as follows: ‘ffmpeg -i big_buck_bunny_480p_surround-fix.avi -vf 
“select=gte(n\,99)” -vframes 1 out_image2.ppm’. 
Here, in this command counting starts with 0, so 100th frame=n value of 99.
We can also calculate the 100th frame by adding counter for frames in code 
and save the 100th frame when count is 100 but its time consuming. Hence 
ffmpeg makes our life easier

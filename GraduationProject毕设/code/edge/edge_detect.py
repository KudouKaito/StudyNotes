import numpy as np
import matplotlib.pyplot as plt
import cv2 as cv
img=cv.imread('cat.png',0)
#显示原图
#plt.imshow(img,cmap=plt.cm.gray)
#plt.show()
#计算Sobel卷积结果
x=cv.Sobel(img,cv.CV_16S,1,0)#cv.CV_16S表示图像转换成16位有符号数据类型
y=cv.Sobel(img,cv.CV_16S,0,1)
#将数据进行转换会uint8形式
Sobel_x=cv.convertScaleAbs(x)
Sobel_y=cv.convertScaleAbs(y)
#利用函数将结果进行合成
result=cv.addWeighted(Sobel_x,0.5,Sobel_y,0.5,0)
#t图像显示
#plt.imshow(result,cmap=plt.cm.gray)
#plt.show()
#利用Scharr算子
x1=cv.Sobel(img,cv.CV_16S,1,0,ksize=-1)
y1=cv.Sobel(img,cv.CV_16S,0,1,ksize=-1)
Sobel_x1=cv.convertScaleAbs(x1)
Sobel_y1=cv.convertScaleAbs(y1)
result1=cv.addWeighted(Sobel_x1,0.5,Sobel_y1,0.5,0)
plt.imshow(result1,cmap=plt.cm.gray)
plt.show()

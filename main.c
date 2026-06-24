#define STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image.h"
#include <stdio.h>
#include <stdlib.h>
#include "stb_image_write.h"

int main()
{
	//char *path = 
	int height, weight, channels;
	unsigned char *img = stbi_load( "1113344.jpg",&weight, &height, &channels, 0);
	if(img != NULL){
		printf("heill");

	}
	unsigned char *greyImg = (unsigned char*) malloc(weight * height);

	for(int i = 0; i<height; i++)
	{
		for(int j = 0; j<weight; j++)
		{
			int k = ((i*weight) + j) * channels;
			greyImg[((i*weight) + j)] = img[k]*0.299 + img[k+1]*0.587 + img[k+2]*0.114;







	}}
	
	stbi_write_jpg("vasyan.jpg", weight , height, 1, greyImg, 100);
	
stbi_image_free(greyImg);





stbi_image_free(img);


}


//(*char) get_path(path)






